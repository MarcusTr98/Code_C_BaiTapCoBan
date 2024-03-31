#include<stdio.h>
#include<string.h>
int main(){
	/*char a[] = "FPT Polytechnic";
	printf("Do dai cua chuoi a la %d", strlen(a)); */
	
	/*char b[50];
	TIEPTUC: printf("\nMoi nhap vao Username: ");
	gets(b);
	if(strlen(b)>10){
		printf("\nUsername khong duoc > 10 ky tu, nhap lai!");
		goto TIEPTUC;
	}else{
		printf("\nUsername cua ban la: %s", b);
	}*/
	
	char c[50];
	char d[] = "vippp";
	char e[50];
	TIEPTUC: printf("\nMoi nhap vao Username: ");
	gets(c);
	if(strlen(c)>10){
		printf("Username ko vuot qua 10 ky tu, nhap lai!");
		goto TIEPTUC;
	}
	strcpy(e,c);
	printf("Usernam cua ban la: %s\n",c);
	printf("Ten trong game cua ban la: %s", strcat(e,d));	
}
