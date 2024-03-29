#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n, a[100], b[100], c[200];
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
void sapXepTangDan(int a[100], int n){
	for(int i=0; i<n; i++){
		for( int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void tronMang(int a1[100], int n1, int a2[100], int n2, int a3[200], int &n3){
	n3= n1+n3;
	int i1=0, i2=0; i3=0;
	while(i3<n3){
		if(i1>=n1){
		a1[i3]=	
		}else if(i2>=n2){
			
		}
		
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
}
