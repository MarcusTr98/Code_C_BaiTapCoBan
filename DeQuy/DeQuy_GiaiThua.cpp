#include<stdio.h>
int giaiThua(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*giaiThua(n-1);
}
int main(){
	int n, gt;
	do{
		printf("Nhap vao n (n>1): ");
		scanf("%d", &n);
	}while(n<0);
	
	gt = giaiThua(n);
	printf("%d!= %d", n, gt);
}
