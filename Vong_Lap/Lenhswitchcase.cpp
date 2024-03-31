#include <stdio.h>
int main()
{
	int n;
	printf("Nhap vao so n = ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("\nChu Nhat");
			break;
		case 2:
			printf("\nThu Hai");
			break;
		case 3:
			printf("\nThu Ba");
			break;
		case 4:
			printf("\nThu Tu");
			break;	
		case 5:
			printf("\nThu Nam");
			break;
		case 6:
			printf("\nThu Sau");
			break;
		case 7:
			printf("\nThu Bay");
			break;
		
		default:
			printf("Chi nhap so tu 1 den 7.");
	}
}
