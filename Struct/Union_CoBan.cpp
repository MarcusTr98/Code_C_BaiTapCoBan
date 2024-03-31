#include<stdio.h>
#include<string.h>
// Union - chua cac phan tu giong nhau
union date{
	int d, m, y;
};
int main(){
	date dat;
	printf("\nSize of union: %d", sizeof(date));
	dat.d = 24;
	printf("\nDate = %d", dat.d);
	dat.m = 9;
	printf("\nMonth = %d", dat.m);
	dat.y = 2022;
	printf("\nYear = %d", dat.y);
	getchar();
}
