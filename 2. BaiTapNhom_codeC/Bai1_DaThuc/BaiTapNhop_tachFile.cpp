#include <stdio.h>
#include <stdlib.h>
int main() {
    int luaChon;
    do {
        printf("\n====== MENU CHUONG TRINH =======\n");
        printf("1. Tinh gia tri Pn(x0) va Qm(x0) \n");
        printf("2. Tinh dao ham bac 1 cua Pn \n");
        printf("3. Tinh tong hieu Pn(x) + Qm(x) \n");
        printf("4. Tinh tich Pn(x) * Qm(x) \n");
        printf("5. Tinh thuong va du Pn(x) / Qm(x) \n");
        printf("6. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1:
            	printf("Tinh gia tri Pn(x0) va Qm(x0)\n");
            	system("chucNang1.exe");
            	break;
            case 2:
            	printf("Tinh dao ham bac 1 cua da thuc\n");
            	system("chucNang2.exe");
                break;
            case 3:
            	printf("Tinh tong hieu Pn(x) + Qm(x)\n");
            	system("chucNang3.exe");
            	break;
            case 4:
            	printf("Tinh tich Pn(x) * Qm(x)\n");
            	system("chucNang4.exe");
                break;        	               
            case 5: 
                printf("Tinh thuong va du Pn(x) / Qm(x)\n");
                system("chucNang5.exe");
                break;
            case 6:
                printf("Ket thuc chuong trinh. Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le. Moi nhap lai.\n");
        }
    } while (luaChon != 6);
    return 0;
}
