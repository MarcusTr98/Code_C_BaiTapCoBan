#include<stdio.h>
#include<string.h>
int main(){
	char s[50][50];
    int n;
    printf("Nhap so luong SV: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Ten SV thu %d: ", i+1);
        fflush(stdin);
        gets(s[i]);
    }
    printf("Danh sach vua nhap la: ");
    for(int i = 0; i < n; i++){
        printf("\nTen SV thu %d: %s", i+1, s[i]);
    }
}
