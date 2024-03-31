#include <stdio.h>
int main()
{	// tinh TB tong cac so chia het cho 2 tu min den den max
	int min, max;
	do{	
		printf("Xin moi nhap vao gia tri min: ");
		scanf("%d", &min);
		printf("Xin moi nhap vao gia tri max: ");
		scanf("%d", &max);	
	}while(min<0);
	
	int count=0;
	float tong=0, TB;
	int i = min;
	
	for( i ; i <= max; i++){
		if(i%2==0){
			printf("i = %d ", i);
			tong+=i;
			count++;
		}
	printf("Nhap lai, so min, max > 0!");
	}
	TB = tong/count;
	printf("TB tong cac so chia het cho 2 tu %d --> %d la %.2f",min,max,TB);
	return 0;
}
