#include<stdio.h>
int main(){
	int age;
	do{
		printf("Xin moi nhap vao tuoi: ");
		scanf("%d", &age);
	}while(age<1 || age>120);
	return 0;
}
