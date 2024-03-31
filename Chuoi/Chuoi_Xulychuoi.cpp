#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Chuoi da nhap: %s", str);
	printf("\nChuoi chu thuong la: %s", strlwr(str));
	char a[20];
	printf("\nNhap chuoi: ");
	gets(a);
	printf("Chuoi da nhap: %s", a);
	printf("\nChuoi chu thuong la: %s", strupr(a));
	
	//strcmp : so sanh
	//strrev : dao nguoc chuoi
	//strstr : tim chuoi con 2 trong chuoi me 1
	char user[10];
	char pass[10];
	printf("Xin moi nhap vao username:");
	gets(user);
	printf("Xin moi nhap vao password:");
	gets(pass);
	// fgets(pass, sizeof(pass)-1, );
	printf("Username cua ban la: %s \nPassword cua ban la: %s", user,pass);
	char userSys[] = "ADMIN";
	char passSys[] = "fpt123";
	
	// So sanh chuoi
	if(strcmp(strupr(user),userSys)==0 && strcmp(pass,passSys)==0 ){
		printf("\nBan da dang nhap thanh cong!");
	}else{
		printf("\nBan da dang nhap that bai!");
	}
	
	// Tim chuoi con
	char a1[30]= "Learning a C.";
	char a2[15]= "C";
	if(strstr(a1,a2)!=NULL){
		printf("Da tim thay!");
	}
}
