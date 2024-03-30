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
	int x, count =0;
	printf("Nhap phan tu can tim: ");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(x==a[i]){
			count++;
		}
	}printf("So lan %d xuat hien trong mang la: %d", x, count);
}
