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
int timKiem(int x[100][100], int m, int n){
	int giaTriTimKiem;
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d", &giaTriTimKiem);		
	int mark=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]==giaTriTimKiem){
				mark++;
			}
		}
	}
	if(mark==0){
		printf("Khong tim thay!");
	}else{
		printf("Tim thay!");
	}
}
/*void thucHienTimKiem(int x[100][100], int m, int n){
	int luaChon=0;
	do{
		int giaTriTimKiem;
		printf("\nNhap vao gia tri can tim: ");
		scanf("%d", &giaTriTimKiem);
		int kq = timKiem(x, m, n,giaTriTimKiem);
		if(kq){
			printf("Da tim thay!");
		}else{
			printf("Khong tim thay!");
		}
		printf("\nNhap so bat ky de tiep tuc, nhap 0 de thoat!\n");
		scanf("%d", &luaChon);
	}while(luaChon!=0);
}*/
int main(){
	nhapMaTran(x,m,n);
	xuatMaTran(x,m,n);
	timKiem(x,m,n);
}
