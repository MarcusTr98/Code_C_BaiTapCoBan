#include <stdio.h>
int main()
{
	int n;
	Nhap:
		printf("Nhap n = ");
		scanf("%d", &n);
	if ( n<=0 ) goto Nhap;
	
	printf("Day so le la: ");
	for( int i = 1; i<=n; i++){
		if(i%2==0) continue;
			printf("\n%d", i );
	}
	return 0;
}
