#include<stdio.h>
// ko co gia tri tra ve, co doi so
void ktSoNguyenTo(int x){
	int mark=0;
	for( int i=2; i<x-1; i++){
		if(x%i==0){
		mark+=1;
		break;
		}
	}if(mark==0){
		printf("%d la so nguyen to", x);
	}
	else{
		printf("%d ko phai la so nguyen to", x);
	}
}
int main(){
	ktSoNguyenTo(37);
	return 0;
}
