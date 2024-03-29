#include<stdio.h>
void nhiphan(int a){
	int h2[20];
	int i = 0;
	while(a>0){
		h2[i] = a%2;
		a= a/2;
		i++;
	}
	for( int j=i-1; j>=0 ; j--){
		printf("%d", h2[j]);
	}
}
int main(){
	int H10;
	printf("Nhap so thap phan: ");
    scanf("%d", &H10);
    printf("--> So nhi phan la: ");
    nhiphan(H10);
}
