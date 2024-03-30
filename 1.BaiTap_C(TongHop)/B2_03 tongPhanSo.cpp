#include<stdio.h>
int main(){
	unsigned int n;
	printf("Nhap vao so tu nhien n: ");
	scanf("%d", &n);
	float sum=0;
	for(unsigned int i=1; i<=n; i++){
		sum+= (float)1/i; // hoac 1.0f
	}
	printf("Ket qua: %.2f", sum);
	return 0;
}
