#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100], b[100], c[200];
int n1, n2, n3;

void nhapMang(int x[100], int &n){
	do{
		printf("Nhap vao so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\nGia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void xuatMangNguoc(int x[100], int n){
	printf("\nGia tri cua mang dao nguoc la: ");
	for(int i=n-1; i>=0; i--){
		printf("%d ", x[i]);
	}
}
void daoNguocMang(int x[100], int n){
	printf("\nDao nguoc mang!");
	for(int i=0; i<n/2; i++){
		int temp = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = temp;
	}
}
void sapXepTangDan(int x[100], int n){
	printf("\nSap xep mang tang dan!");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(x[i]<x[j]){
				int temp = x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
void tronMang(int x1[100], int n_x1, int x2[100], int n_x2, int x3[200], int &n_x3){
	n_x3 = n_x1+n_x2;
	int i1 = 0, i2 = 0, i3 = 0;	
	while(i3<n_x3){ if(i1>=n_x1){
			x3[i3]=x2[i2];
			i2++;
		}else if(i2>=n_x2){
			x3[i3]=x1[i1];
			i1++;
		}else if(x1[i1]<x2[i2]){
			x3[i3]=x1[i1];
			i1++;
		}else{
			x3[i3]=x2[i2];
			i2++;
		}
		i3++;
	}
}
int main(){
	printf("\n-------\n");
	printf("Mang 1: \n");
	nhapMang(a, n1);
	xuatMang(a, n1);
	sapXepTangDan(a, n1);
	xuatMang(a, n1);
	printf("\n-------\n");
	printf("Mang 2: \n");
	nhapMang(b, n2);
	xuatMang(b, n2);
	sapXepTangDan(b, n2);
	xuatMang(b, n2);
	printf("\n-------\n");
	tronMang(a, n1, b, n2, c, n3);
	xuatMang(c, n3);
	printf("\n-------\n");	
	daoNguocMang(c, n3);
	xuatMang(c, n3);
}
