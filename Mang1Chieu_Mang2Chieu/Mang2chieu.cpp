#include<stdio.h>
int main(){
	int i,j,n,m;
	
	printf("Nhap vao so hang: ");
	scanf("%d", &n);
	printf("Nhap vao so cot: ");
	scanf("%d", &m);
	int arr[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("\nXin moi nhap gtri vi tri arr[%d][%d]:", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("\nVi tri thu arr[%d][%d]: %d", i,j,arr[i][j]);
		}
	}	
}
