#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// tao ra 2 file co noi dung truoc
int main() {
    FILE *fp1, *fp2;
    int kt1, kt2;
    char fname1[40], fname2[40];

    printf("Nhap ten file thu nhat: "); // nhap ca txt
    gets(fname1);
    printf("Nhap ten file thu hai: ");
    gets(fname2);

    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "r");

    if (fp1 == NULL) {
        printf("\nKhong the mo file %s!", fname1);
        exit(1);
    } else if (fp2 == NULL) {
        printf("\nKhong the mo file %s!", fname2);
        exit(1);
    } else {
        kt1 = getc(fp1);
        kt2 = getc(fp2);
    }

    int count = 0;
    while (kt1 != EOF && kt2 != EOF && kt1 == kt2) {
        kt1 = getc(fp1);
        kt2 = getc(fp2);
        count++;
    }

    if (kt1 == kt2) {
        printf("2 file trung nhau!");
        printf("\nCo so ky tu la: %d", count);
    } else {
        printf("2 file khac nhau!");
    }

    rewind(fp1);
    char nd1[1000]; 
    fgets(nd1, sizeof(nd1), fp1);
    printf("\nNoi dung cua file %s: %s", fname1, nd1);

    rewind(fp2);
    char nd2[1000];
    fgets(nd2, sizeof(nd2), fp2);
    printf("\nNoi dung cua file %s: %s", fname2, nd2);

    // Tìm kiem ky tu bat ky trong' file
    char timKiem;
    int dem = 0;
    printf("\nNhap ky tu can kiem tra: ");
    scanf(" %c", &timKiem); // Su dung " %c" de bo qua ky tu trong

    rewind(fp1); // tro ve dau file
    char a;
    while ((a = fgetc(fp1)) != EOF) {
        if (timKiem == a) {
            dem++;
        }
    }

    if (dem != 0) {
        printf("Co ky tu %c trong file 1 va 2, so lan lap la %d lan", timKiem, dem);
    } else {
        printf("Ko co ky tu trong 2 file!");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

