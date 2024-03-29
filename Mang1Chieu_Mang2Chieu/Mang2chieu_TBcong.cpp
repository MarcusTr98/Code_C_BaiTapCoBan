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
double trungBinhCongTatCa(int x[100][100], int m, int n){
	if(m<=0 || n<=0){
		return 0;
	}
	int tong =0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			tong+= x[i][j];
		}
	}
	double TBCong = (double)tong/ (m*n);
	return TBCong;
}
double trungBinhCongChiaCho5(int x[100][100], int m, int n){
	if(m<=0 || n<=0){
		return 0;
	}
	int tong=0;
	int dem =0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]%5==0){
				dem++;
				tong+= x[i][j];
			}
		}
	}
	double TBCong = 0;
	if(dem > 0){
		TBCong = (double)tong/ dem;
	}else
	return TBCong;	
}
int main(){
	nhapMaTran(x,m,n);
	xuatMaTran(x,m,n);
	printf("Trung binh cong la: %.2f",trungBinhCongTatCa(x, m, n) );
	printf("\nTrung binh cong chia het cho 5 la: %.2f",trungBinhCongChiaCho5(x, m, n) );
}
