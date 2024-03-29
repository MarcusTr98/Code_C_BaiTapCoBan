#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100], b[100], c[200];
int n1, n2, n;

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
void tachMang(int x[100], int n, int x1[100], int &n1, int x2[100], int &n2){
	int i1=0;
	int i2=0;
	for(int i=0; i<n; i++){
		if(x[i]%2==0){ // co the ptrien thanh tach duong-am
			x1[i1]=x[i];
			i1++;
			n1++;
		}else{
			x2[i2]=x[i];
			i2++;
			n2++;			
		}
	}
}

int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	tachMang(a, n, b,n1, c,n2);
	printf("Mang con so chan!");
	xuatMang(b, n1);
	printf("Mang con so le!");
	xuatMang(c, n2);
}
