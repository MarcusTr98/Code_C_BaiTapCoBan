#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nVi tri muon lay: %d", arr[2]);
	printf("\n");
	for(int i=0; i<n; i++){
		printf("\nVi tri thu [%d] la: %d ", i, arr[i]);
	}
}
