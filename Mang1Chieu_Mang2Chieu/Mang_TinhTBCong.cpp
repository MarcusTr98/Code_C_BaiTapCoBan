#include<stdio.h>
float trungBinhCong(int x[], int n) {
	int tong =0;
	for(int i=0; i<n; i++){
		tong+=x[i];
	}
	return (float)tong/n;
}
float trungBinhCongSoDuong(int x[], int n) {
	int tong =0;
	int soLuongSoDuong=0;
	for(int i=0; i<n; i++){
		if(x[i]>=0){
			tong+=x[i];
			soLuongSoDuong++;
		}
	}
	return soLuongSoDuong>0?(float)tong/soLuongSoDuong:-1;
}
int main(){
	int n;
	int a[100];
	do{
		printf("Nhap vao so luong phan tu (0<n<100): ");
		scanf("%d", &n);
	}while(n<1|| n >100);
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\nTB cong: %.2f", trungBinhCong(a,n));
	
	float tbcsd = trungBinhCongSoDuong(a,n);
	if(tbcsd>0){
		printf("\nTrung binh cong so duong: %.2f", tbcsd);
	}else{
		printf("\nMang ko co so duong!");
	}
}
