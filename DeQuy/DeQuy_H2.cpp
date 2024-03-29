#include<stdio.h>
void H2(int x){
	if(x==0){
		return;
	}else{
		int r= x%2;
		H2(x/2);
		printf("%d", r);
	}
}
int main(){
	int n;
	do{
	printf("Nhap vao n= ");
	scanf("%d", &n);
	}while(n<0);
	
	H2(n);
}
