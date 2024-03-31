#include <stdio.h>
int main()
	// tinh giai thua so n ( n >=0 )
{
	int n;
	do{
		printf("\nNhap vao n (n>=0): ");
		scanf("%d", &n);
	}while(n<0);
	
	int giaiThua=1;
	for ( int i=1; i<=n; i++){
		giaiThua *= i;
	}
	printf("\nGiai thua = %d", giaiThua);
	return 0;
}
