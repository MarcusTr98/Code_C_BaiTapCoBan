#include<stdio.h>
int main(){
	int n,m;
	printf("Nhap vao n cot va m hang: ");
	scanf("%d%d", &n,&m);
	int a[n][m];
	for( int i=0; i<n; i++){
		for( int j=0; j<m; j++){
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		int max= a[i][0];
		for(int j=0; j<m; j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}printf("Max hang %d= %d.\n", i+1, max);
	}
}
