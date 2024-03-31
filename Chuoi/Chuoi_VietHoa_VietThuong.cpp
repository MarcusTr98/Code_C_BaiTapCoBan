#include<stdio.h>
#include<string.h>
void vietHoa(char x[]){
	for(int i=0; i< strlen(x); i++){
		if( x[i]>=97 && x[i]<=122){
			x[i] = x[i]-32;
		}
	}
}
void vietThuong(char x[]){
	for(int i=0; i< strlen(x); i++){
		if( x[i]>=65 && x[i]<=90){
			x[i] = x[i]+32;
		}
	}
}
int main(){
	char s[50]= " ";
	printf("Nhap s = ");\
	fgets(s, sizeof(s), stdin);
	printf("\nChuoi ban dau: %s", s);
	vietHoa(s);
	printf("\nViet hoa chuoi: %s", s);
	vietThuong(s);
	printf("\nViet thuong chuoi: %s", s);
}
