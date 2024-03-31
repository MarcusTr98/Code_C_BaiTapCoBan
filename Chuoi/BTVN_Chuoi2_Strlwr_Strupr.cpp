#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Nhap vao chuoi can chuyen doi: ");
	gets(s);
	printf("\nChuoi viet hoa: %s", strupr(s));
	printf("\nChuoi viet thuong: %s", strlwr(s));
}
