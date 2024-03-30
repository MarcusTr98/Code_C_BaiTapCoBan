#include<stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("\nDay tang dan: ");
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}printf("%d ", a[i]);
	}
	printf("\nDay giam dan: ");
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]>a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}printf("%d ", a[i]);
	}
}
