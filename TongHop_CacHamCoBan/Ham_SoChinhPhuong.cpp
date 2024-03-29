#include<stdio.h>
#include<math.h>
// ktra day so chinh phuong <= n

int kiem_tra_SCP(int x)
{
	int kc = sqrt(x);
	if ( pow(kc,2)==x)
		return 1;
		
	else
		return 0;
}

int main()
{
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d", &n);
	}while(n<1);
	
	for(int i=2; i<=n; i++){
		if( int kc = kiem_tra_SCP(i) ){
			printf("%d ", i);
		}
	}
}
