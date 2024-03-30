#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	int mark=0;
	if(n<=1){
		printf("Khong phai so nguyen to.");
		return 0;
	}else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				mark++;
			}
		}
	}
	if(mark==0){
		printf("La so nguyen to.");	
	}else{
		printf("Khong phai so nguyen to.");
	}
	return 0;
}
