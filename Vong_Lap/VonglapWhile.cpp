#include <stdio.h>
int main()
{
	int n;
	int tong =0;
	
	printf("Nhap vao so n = ");
	scanf("%d", &n);
	int i=0;
	while (i<=n){
		tong+= i; // chay lan luot cac cau lenh theo thu tu
		i++;
	}
	printf("\nTong = %d", tong);
	return 0;
}
