#include<stdio.h>

int main(){
	int n;
	int f0=0;
	int f1=1;
	int last;
	printf("Xin moi nhap so n: ");
	scanf("%d", &n);
	printf("%d\n", f0);
	
	while (f1<n){
		printf("%d\n",f1);
		last=f0+f1;
		f0=f1;
		f1=last;
	}
	return 0;
}
