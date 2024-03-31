#include<stdio.h>
int main()
// tim uoc so chung lon nhat
{
	int a,b, UCLN, BCNN;
	printf("Nhap vao so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b: ");
	scanf("%d", &b);
	
	int bc= a*b;
	if( a==0 || b==0){
		UCLN = a+b;
		printf("Uoc chung lon nhat cua 2 so la: %d",UCLN);
	}
	else{
		while(a!=b){
			if(a>b){
				a-=b; 
			}else{
				b-=a;
			}
		}
		UCLN = a;
		printf("Uoc chung lon nhat cua 2 so la: %d",UCLN);
	}
	BCNN = (bc)/UCLN;
	printf("\nBoi chung nho nhat cua 2  so la: %d",BCNN);
	
	return 0;
}
