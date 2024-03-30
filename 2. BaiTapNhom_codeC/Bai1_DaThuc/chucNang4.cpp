#include <stdio.h>
struct DaThuc {
    int heSo[100]; 
    int bac;
};

struct DaThuc NhapDaThuc() {
    struct DaThuc dt;

    printf("Nhap bac cua da thuc: ");
    scanf("%d", &dt.bac);
    printf("Nhap cac he so:\n");
    for (int i = 0; i <= dt.bac; i++) {
        printf("He so bac %d: ", i);
        scanf("%d", &dt.heSo[i]);
    }

    return dt;
}
void InDaThuc(struct DaThuc dt) {
    for (int i = 0; i <= dt.bac; i++) {
        printf("%dx^%d", dt.heSo[i], i);
        if (i < dt.bac) {
            printf(" + ");
        }
    }
    printf("\n");
}
struct DaThuc tichdt(struct DaThuc P, struct DaThuc Q) {
    struct DaThuc tich;
    tich.bac = P.bac + Q.bac;
   	for (int i = 0; i <= tich.bac; i++) {
        tich.heSo[i] = 0;
    }
    for (int i = 0; i <= P.bac; i++) {
        for (int j = 0; j <= Q.bac; j++) {
            tich.heSo[i + j] += P.heSo[i] * Q.heSo[j];
        }
    }
    return tich;
}
int main(){
	struct DaThuc kq, Pn,Qm;		
	printf("Nhap da thuc Pn: \n");
	Pn = NhapDaThuc();
	printf("Nhap da thuc Qm: \n");
	Qm = NhapDaThuc();
	kq=tichdt(Pn, Qm);
	printf("Tich cua Pn * Qm la: \n");
	InDaThuc(kq);
    return 0;
}