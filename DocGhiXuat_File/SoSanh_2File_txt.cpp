#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	// khai bao
	FILE *fp1, *fp2;
	int kt1, kt2;
	char fname1[40], fname2[40];

	// mo file		
	fp1 = fopen("File1.txt", "r");
	fp2 = fopen("File2.txt", "r");
	
	if(fp1 == NULL){
		printf("\nKhong the mo file!", fname1);
		exit(1);
	}else if(fp2 == NULL){
		printf("\nKhong the mo file!", fname2);
		exit(1);
	}else{ // gan ktra kt1 kt2 cho tung ki tu cua fp1 va fp2
		kt1 = getc(fp1);
		kt2 = getc(fp2);
	}

	while( kt1 != EOF && kt2 != EOF && kt1 == kt2  ){
		kt1 = getc(fp1);
		kt2 = getc(fp2);		
	}
	
	if(kt1 == kt2){
		printf("2 file trung nhau!");
	}else if(kt1 != kt2){
		printf("2 file khac nhau!");
	}
	//dong file
	fclose(fp1);
	fclose(fp1);
}
