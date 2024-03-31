#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	if(n<2){
		printf("%d khong phai la so nguyen to.", n);
	}else{
		int i;
		int mark = 1;
		for ( i=2; i<n; i++){
			if(n%i==0){
				mark=0;
				break;
			}
		}
		if(mark == 1){
			printf("%d la so nguyen to.", n);
		}else{
				printf("%d khong phai la so nguyen to.", n);
		}	
	}	
	return 0;
}
