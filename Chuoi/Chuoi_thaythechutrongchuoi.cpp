#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    printf("Nhap chuoi can thay the 3 -> e: ");
    fflush(stdin);
    gets(s);
    for(int i =0; i<strlen(s); i++){
        if(s[i] == '3'){
            s[i]='e';
        }
    }
    printf("%s", s);
    return 0;
}
