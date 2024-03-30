#include<stdio.h>
int main(){
	int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	int sum=0;
	for(int i=7; i<=n; i++){
		if(i%7==0){
			sum+=i;
			printf("%d ", i);
		}
	}
	printf("\nTong cac so <= %d va chia het cho 7: %d", n, sum);
}
