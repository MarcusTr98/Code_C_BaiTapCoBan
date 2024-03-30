#include<stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n-1; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	int min = a[0], max = a[0];
	for(int i=0; i<n-1; i++){
		if(min> a[i]){
			min=a[i];
		}
	}printf("Min= %d", min);
	for(int i=0; i<n-1; i++){
		if(max< a[i]){
			max=a[i];
		}
	}printf("\nMax= %d", max);
}
