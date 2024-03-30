#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	long long giaiThua=1, sum=0;
	for(int i=1; i<=n; i++){
		giaiThua*= i;
		printf("%d ", giaiThua);
		sum+= giaiThua;
	}
	printf("\n%d! la: %d", n, giaiThua);
	printf("\nTong tu 1! den %d! la: %d", n, sum);
}
