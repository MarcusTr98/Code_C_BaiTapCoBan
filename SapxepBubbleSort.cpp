#include<stdio.h>
// thuat toan bubble sort
int main (){
	int n;
	printf("Moi nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int k=0; k<n; k++){
		printf("Vi tri thu arr[%d]: ", k);
		scanf("%d", &arr[k]);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]>arr[i]){
				int mark;
				mark = arr[j];
				arr[j] = arr[i];
				arr[i] = mark;
			}
		}
	}
	for(int i=0; i<n; i++){
	printf("Vi tri thu [%d] la: %d \n", i, arr[i]);
	}
}
