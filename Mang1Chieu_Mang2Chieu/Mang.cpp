#include<stdio.h>
int main(){
	// khai bao mang
	int a[10];
	float b[100];
	char c[1000];
	
	int x[10] = {};
	int y[3]={9,6,15};
	// gan du lieu cho mang
	y[1]=10;
	
	printf("\n0-%d", y[0]);
	printf("\n1-%d", y[1]);
	printf("\n2-%d", y[2]);
}
