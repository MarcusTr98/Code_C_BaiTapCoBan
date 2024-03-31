#include<stdio.h>
#include<string.h>
int main(){
	char A[20], B[20], C[20];
	printf("Nhap chuoi A: ");
	gets(A);
	printf("Do dai chuoi A: %d", strlen(A));
	
	printf("\nNhap chuoi B: ");
	gets(B);
	printf("Do dai chuoi B: %d", strlen(B));
	
	strcat(A,B);
	printf("\nNoi 2 chuoi: %s", A);
	printf("\nDo dai chuoi sau noi: %d", strlen(A));
		
	strcpy(A,B);
	printf("\nCoppy chuoi B -> A: %s", A);	
	//strcpy(A,B)
	
	
}
