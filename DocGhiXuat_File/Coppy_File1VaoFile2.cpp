#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// TAO TRUOC 2 FILE ( "File1.txt" => Co du lieu ,"File2.txt" => file trong )

int main() {
   	FILE *fp1, *fp2;
   	char kt1;	
   	fp1 = fopen("File1.txt", "r");
   	if (fp1 == NULL){
      	puts("Khong the mo file nay");
      	exit(1);
   	}
   	fp2 = fopen("File2.txt", "w");
   	if (fp2 == NULL) {
      	puts("Khong the mo file nay");
      	fclose(fp2);
      	exit(1);
   	} 	
   	do{
      	kt1 = fgetc(fp1);
     	fputc (kt1, fp2);
   	}while (kt1 != EOF);  
	    	
	rewind(fp1);
	char nd[30];
	fgets(nd, 30, fp1);
	printf("\nNoi dung cua file: %s", nd);
	
	fclose(fp1);
  	return 0;
}
