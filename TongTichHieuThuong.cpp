#include <stdio.h>
int main()
{
	float a,b;
	printf("Nhap vao gia tri cua a = ");
	scanf("%f", &a);
	printf("Nhap vao gia tri cua b = ");
	scanf("%f", &b);
	
	float tong = a+b;
	printf("\nTong %.2f + %.2f = %.2f", a,b,tong);
	
	float hieu = a-b;
	printf("\nHieu %.2f - %.2f = %.2f", a,b,hieu);
	
	float tich = a*b;
	printf("\nTich %.2f * %.2f = %.2f", a,b,tich);
	
	float thuong = a/b;
	printf("\nThuong %.2f / %.2f = %.2f", a,b,thuong);
	
	int du = (int)a % (int)b;  //phep chia lay du tra ve so int
	printf("\n%.2f chia lay du %.2f = %d", a,b,du);
	
	a++;
	printf("\na++ = %.2f", a);
	
	b--;
	printf("\na-- = %.2f", b);
	
	return 0;
}

