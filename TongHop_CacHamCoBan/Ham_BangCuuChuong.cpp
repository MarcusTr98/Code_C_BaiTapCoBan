#include<stdio.h>
int bangCuuChuong(int n){
	for(int i=1; i<=10; i++){
		printf("\n%d x %d = %d", n, i, i*n);
	}
}
int main(){
	int a;
	printf("Nhap Bang cuu chuong can in: ");
	scanf("%d", &a);
	bangCuuChuong(a);
}
