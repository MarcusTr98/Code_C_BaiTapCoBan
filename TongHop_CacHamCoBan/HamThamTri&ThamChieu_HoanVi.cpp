#include<stdio.h>
// ham truyen tham tri
void hoanvi_thamtri(int a, int b){
	int temp =a;
	a=b;
	b=temp;
}
void hoanvi_thamchieu(int &a, int &b){
	int temp =a;
	a=b;
	b=temp;
}
int main(){
	int a,b;
	printf("Nhap vao 2 so a,b: ");
	scanf("%d%d", &a,&b);
	printf("\nGia tri ban dau: a=%d va b=%d", a,b);
	hoanvi_thamtri(a,b);
	printf("\nGia tri sau hoan vi: a=%d va b=%d", a,b);
	hoanvi_thamchieu(a,b);
	printf("\nGia tri sau hoan vi: a=%d va b=%d", a,b);
	
}
