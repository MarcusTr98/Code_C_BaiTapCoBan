#include<stdio.h>
int main(){
	int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	int sum =0;
	for( int i =1; i<=n; i++){
		sum+=i;
	}
	printf("Tong= %d", sum);
}
