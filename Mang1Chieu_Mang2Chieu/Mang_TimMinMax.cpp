#include<stdio.h>
int timMin(int x[], int n){
	int min = x[0];
	for(int i=1; i<n; i++){
		if(min>x[i]){
			min = x[i];
		}
	}return min;
}
int timMax(int x[], int n){
	int max = x[0];
	for(int i=1; i<n; i++){
		if(max<x[i]){
			max = x[i];
		}
	}return max;
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
	printf("\nMax = %d", timMax(a,n));
	printf("\nMin = %d", timMin(a,n));	
}
