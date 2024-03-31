#include<stdio.h>
#include<string.h>
int main(){
	char n, s[100];
	printf("Nhap vao 1 chuoi ky tu: ");
	gets(s);
	printf("Nhap vao 1 ky tu can ktra: ");
	scanf("%c", &n);	
	int i, count=0;
	for(i=0; i < strlen(s); i++){
		if(s[i] == n){
			count++;
		}
	}
	if(count==0){
		printf("\nKy tu '%c' khong xuat hien trong chuoi!", n);
	}else{
		printf("\nSo lan xuat hien cua ky tu '%c' la: %d lan.", n, count);
	}
}
