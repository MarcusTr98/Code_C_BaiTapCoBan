#include<stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	//BubbleSort giam dan
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]>a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;				
			}
		}
		printf("%d ", a[i]);
	}
	if(a[1]==a[0]){
		printf("\nKhong co gia tri lon thu 2 thoa man!");
	}else{
		printf("\nGia tri lon thu 2 trong mang: %d", a[1]);
	}
	if(a[n-1]==a[n-2]){
		printf("\nKhong co gia tri nho thu 2 thoa man!");
	}else{
		printf("\nGia tri nho thu 2 trong mang: %d", a[n-2]);
	}
}
