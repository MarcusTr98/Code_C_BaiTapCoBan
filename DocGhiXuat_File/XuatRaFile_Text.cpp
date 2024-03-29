#include "stdio.h"
#include "stdlib.h"

int main(){
	FILE *f;
	// 1 - Tao file
	// 2 - Mo file
	f = fopen("XuatRaFile.txt", "w");
	if( f == NULL){
		printf("\nLoi tao hoac mo file");
		return 0; // exit(1);
	}
	
	// 3 - Doc hoac ghi file
	int n;
	printf("Nhap vao so: ");
	scanf("%d", &n);
	fprintf(f, "%d", n); // in vao file
	
	// 4 - Dong file
	fclose(f);
	return 0;
}
