#include<stdio.h>
int a[100];
int n;
int x;
void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int &n){
 	printf("Gia tri cua mang la: ");
 	for(int i=0; i<n; i++){
 		printf("%d ", x[i]);
	 }
}
int timKiem(int x[100], int n, int tk){
	int kq=0;
	for(int i=0; i<n; i++){
		if(x[i] == tk){
			kq==1;
			return 1;
		}
	}
	return kq;
}
void thucHienTimKiem(int x[100], int n){
	int tk;
	printf("Nhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq= timKiem(x,n,tk);
	if(kq==1){
		printf("\nDa tim thay!");
	}else{
		printf("\nKo tim thay!");
	}
}
int main(){
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\n");
	thucHienTimKiem(a,n);
}
