#include <stdio.h>
// con tro *
// ham co trach nhiem tinh toan va thay doi gtri bien
// goi ham (dia chi)
void hoanvi(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int so1 =300;
	int so2 =500;
	printf("Gia tri so1 truoc hoan vi: %d", so1);
	printf("\nGia tri so2 truoc hoan vi: %d", so2);
	
	hoanvi(&so1, &so2);
	printf("\nGia tri so1 sau hoan vi: %d", so1);
	printf("\nGia tri so2 sau hoan vi: %d", so2);
	
	return 0;
}
