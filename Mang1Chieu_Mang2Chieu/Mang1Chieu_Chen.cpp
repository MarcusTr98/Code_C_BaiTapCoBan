#include<stdio.h>
void nhapMang(int a[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap a[%d]:", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void themVaoCuoiMang(int a[100], int &n, int m){ // luu lai bien n;
	int size = sizeof(a)/sizeof(a[0]); // tìm kich co
	if(n==size){
		printf("Ko the them vao mang!");
	}
	a[n]=m; 
	n++; // mang tang 1 phantu
}
void themVaoDauMang(int a[100], int &n, int m){
	int size = sizeof(a)/sizeof(a[0]); // tìm kich co
	if(n==size){
		printf("Ko the them vao mang!");
	}
	n++; // mang tang 1 phantu
	for(int i=n-1; i>0; i--){
		a[i]=a[i-1];
	}a[0]=m;
}
void themVaoViTri(int a[100], int &n, int m, int k){
	int size = sizeof(a)/sizeof(a[0]); // tìm kich co
	if(n==size){
		printf("Ko the them vao mang!");
	}
	n++; // mang tang 1 phantu
	for(int i=n-1; i>k; i--){
		a[i]=a[i-1];
	}a[k]=m;
}
int main(){
	int n, a[100];
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	themVaoCuoiMang(a, n, 99);
	printf("\n");
	xuatMang(a, n);
	themVaoDauMang(a, n, 98);
	printf("\n");
	xuatMang(a, n);	
	themVaoViTri(a, n, 97, 4);
	printf("\n");
	xuatMang(a, n);
}
