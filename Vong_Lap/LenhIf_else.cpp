#include <stdio.h>
int main()
// nhap so n, ktra n < 20 ? neu co thì TB ra man hinh
{
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	
	/*if(n<20){
		printf("\nSo nhap vao nho hon 20");
	}*/
	
	/*if(n%2==0){
		printf("\nSo nhap vao la so chan.");
	}
	else{ //else ko có dieu kien
		printf("\nSo nhap vao la so le.");
	}*/
	
	if(n%2==0){
		printf("\nSo nhap vao la so chan.");
	}else if(n%2==1){
		printf("\nSo nhap vao la so le");
	}
	// thu tu thuc hien if > if else > else
}
