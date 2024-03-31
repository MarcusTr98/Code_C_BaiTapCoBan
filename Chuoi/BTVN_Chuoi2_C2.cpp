#include<stdio.h>
#include<string.h>
void vietHoa(char x[]){
	for(int i=0; i<strlen(x); i++){
		if(x[i]>=97 && x[i]<=122){ // 97-122 char viet thuong
			x[i]=x[i]-32; // Hoa va Thuong cach nhau 32
		}
	}
}
void vietThuong(char x[]){
	for(int i=0; i<strlen(x); i++){
		if(x[i]>=65 && x[i]<=90){ // 65-90 char viet hoa
			x[i]=x[i]+32;
		}
	}	
}
void vietHoaChuCaiDau(char x[]){
	for(int i=0; i<strlen(x); i++){
		// if(i==0 || (i>0 && x[i-1]==32) ){
		if(i==0 || (i>0 && ( x[i-1]==32 || ( (x[i-1]<65) || ((x[i-1]>90) && (x[i-1]<97)) || (x[i-1]>123) )))){
			if(x[i]>=97 && x[i]<=122){ 
				x[i]=x[i]-32; // 32 la khoang trong
			}
		}else{
			if(x[i]>=65 && x[i]<=90){ 
				x[i]=x[i]+32;
			}
		}
	}
}
int main(){
	char s[50];
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	printf("\nChuoi ban dau: %s", s);
	vietHoa(s);
	printf("\nViet hoa: %s", s);
	vietThuong(s);
	printf("\nViet thuong: %s", s);		
	vietHoaChuCaiDau(s);
	printf("\nViet hoa chu cai dau: %s", s);
}
