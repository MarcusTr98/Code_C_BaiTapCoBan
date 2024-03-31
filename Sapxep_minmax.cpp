#include<stdio.h>
int timMinMax(int a[], int n){
	int min = a[0];
	int max = a[0];
	for(int i=1; i<n; i++){
		if(a[i] < min){
			min= a[i];
		}else if (a[i] > max){
			max= a[i];
		}
	}
	printf("Min = %d, max = %d", min, max);
	//return min, max;
}
int main(){
	int n;
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<0);
	int a[n];
	for(int i=0; i<=n-1; i++){
		printf("\na[%d]= ",i);
		scanf("%d", &a[i]);
	}
	timMinMax(a,n);
	//printf("Min = %d, max = %d", timMinMax(a,n));
}
