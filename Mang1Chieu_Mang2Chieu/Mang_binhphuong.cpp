#include<stdio.h>
int m,n;
int x[100][100];
void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]= ", i,j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
int binhPhuongMang(int x[100][100], int m, int n){
	printf("\nMang binh phuong:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", x[i][j]*x[i][j] );
		}
		printf("\n");
	}
}
int main(){
	nhapMaTran(x,m,n);
	xuatMaTran(x,m,n);
	binhPhuongMang(x,m,n);
}
