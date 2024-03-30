#include<stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	int min= a[0], min2=a[1], max= a[0], max2=a[1];
	// tim min;
	for(int i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
		}
	}//printf("\nMin= %d", min);
	// tim min 2
	for(int i=0; i<n; i++){
		if(a[i]==min){
			continue;
		}else{
			if(a[i]<min2){
				min2=a[i];
			}
		}
	}printf("\nMin2= %d", min2);
	// tim max;
	for(int i=0; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
	}//printf("\nMax= %d", max);
	// tim max 2
	for(int i=0; i<n; i++){
		if(a[i]==max){
			continue;
		}else{
			if(a[i]>max2){
				max2=a[i];
			}
		}
	}printf("\nMax2= %d", max2);
}
