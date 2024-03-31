#include<stdio.h>
int main(){
	printf("Bang cuu chuong 1 --> 10\n");
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
