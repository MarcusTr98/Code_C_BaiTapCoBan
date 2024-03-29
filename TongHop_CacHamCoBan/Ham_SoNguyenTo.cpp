#include<stdio.h>
#include<math.h>
// ktra so nguyen to

int kiem_tra_SNT(int x)
{
	if ( x<=1 )
		return 0;
	
	for(int i=2; i<=x-1; i++){
		if (x%i==0)
			return 0;
 	}
 	return 1;
}

int main()
{
	// nhap lieu
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	//goi ham
	int kt = kiem_tra_SNT(n);
	// xu ly la xuat kqua
	if(kt==0){
		printf("Khong phai la so nguyen to.");
	}
	else{
		printf("La so nguyen to.");
	}
	return 0;
}
