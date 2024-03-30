#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so tu nhien n: ");
	scanf("%d", &n);
	int s= 0, s1=0, s2=0;
	for( int i=0; i<=n; i++){
		s+= i;
		if(i%2!=0){
			s1+=i;
		}else{
			s2+=i;
		}
	}
	printf("\nTong cac so tu nhien <= n la: %d", s);
	printf("\nTong cac so tu nhien le <= n la: %d", s1);
	printf("\nTong cac so tu nhien chan <= n la: %d", s2);
	
	return 0;
}
