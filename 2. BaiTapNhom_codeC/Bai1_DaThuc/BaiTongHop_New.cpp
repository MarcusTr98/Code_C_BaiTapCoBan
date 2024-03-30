#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct daThuc {
    int bac;
    int heso[100];
};

// nhap da thuc ng dung
struct daThuc nhapDaThuc() {
    struct daThuc dt;
    printf("Nhap bac cua da thuc: ");
    scanf("%d", &dt.bac);
    printf("Nhap cac he so tu bac cao den bac thap:\n");
    for (int i = dt.bac; i >= 0; --i) {
        printf("He so bac %d la: ", i);
        scanf("%d", &dt.heso[i]);
    }
    return dt;
}

// Hàm in da thuc ra màn hình
void inDaThuc(struct daThuc dt) {
    for (int i = dt.bac; i >= 0; --i) {
        printf("%dx^%d", dt.heso[i], i);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Hàm tính giá tri da thuc tai 1 diem x0
float giaTriDaThuc(struct daThuc dt, float x0) {
    float ketQua = 0.0f;
    for (int i = dt.bac; i >= 0; --i) {
        ketQua += dt.heso[i] * powf(x0, dt.bac - i);
    }
    return ketQua;
}

// Hàm tính dao ham bac 1 cua da thuc
struct daThuc daoHam(struct daThuc dt) {
    struct daThuc dham;
    dham.bac = dt.bac - 1;
    for (int i = 0; i <= dham.bac; i++) {
        dham.heso[i] = (i + 1) * dt.heso[i + 1];
    }
    return dham;
}

int main() {
    int luaChon;
    do {
        printf("\n======== MENU CHUONG TRINH =========\n");
        printf("1. Tinh gia tri Pn(x0) va Qm(x0)\n");
        printf("2. Tinh dao ham bac 1 cua Pn\n");
        printf("3. Tinh tong hieu Pn(x) + Qm(x)\n");
        printf("4. Tinh tich Pn(x) * Qm(x)\n");
        printf("5. Tinh thuong va du Pn(x) / Qm(x)\n");
        printf("6. Thoat chuong trinh\n");
        printf("====================================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1: {
                float x0;
                printf("Nhap gia tri x0: ");
                scanf("%f", &x0);
                struct daThuc Pn, Qm;
                printf("Nhap da thuc Pn:\n");
                Pn = nhapDaThuc();
                printf("Nhap da thuc Qm:\n");
                Qm = nhapDaThuc();
                float ketQua_Pn = giaTriDaThuc(Pn, x0);
                float ketQua_Qm = giaTriDaThuc(Qm, x0);
                printf("Pn(%.0f) = %.0f\n", x0, ketQua_Pn);
                printf("Qm(%.0f) = %.0f\n", x0, ketQua_Qm);
                break;
            }
            case 2: {
                struct daThuc P;
                printf("Nhap da thuc P: \n");
                P = nhapDaThuc();
                struct daThuc ketQua;
                printf("Dao ham bac 1 cua da thuc P la: \n");
                ketQua = daoHam(P);
                inDaThuc(ketQua);
                break;
            }
            case 3: {
                struct daThuc Pn, Qm;
                printf("Nhap da thuc Pn:\n");
                Pn = nhapDaThuc();
                printf("Nhap da thuc Qm:\n");
                Qm = nhapDaThuc();
                struct daThuc tong;
                printf("Pn + Qm = \n");
                for (int i = 0; i <= Pn.bac || i <= Qm.bac; i++) {
                    if (i <= Pn.bac && i <= Qm.bac)
                        tong.heso[i] = Pn.heso[i] + Qm.heso[i];
                    else if (i <= Pn.bac)
                        tong.heso[i] = Pn.heso[i];
                    else
                        tong.heso[i] = Qm.heso[i];
                }
                tong.bac = (Pn.bac > Qm.bac) ? Pn.bac : Qm.bac;
                inDaThuc(tong);
                break;
            }
            case 4: {
                struct daThuc Pn, Qm;
                printf("Nhap da thuc Pn:\n");
                Pn = nhapDaThuc();
                printf("Nhap da thuc Qm:\n");
                Qm = nhapDaThuc();
                struct daThuc tich;
                tich.bac = Pn.bac + Qm.bac;
                for (int i = 0; i <= tich.bac; i++) {
                    tich.heso[i] = 0;
                }
                for (int i = 0; i <= Pn.bac; i++) {
                    for (int j = 0; j <= Qm.bac; j++) {
                        tich.heso[i + j] += Pn.heso[i] * Qm.heso[j];
                    }
                }
                printf("Tich cua Pn * Qm la: \n");
                inDaThuc(tich);
                break;
            }
            case 5: {
                struct daThuc Pn, Qm, ketQuaThuong, ketQuaDu;
                printf("Nhap da thuc Pn:\n");
                Pn = nhapDaThuc();
                printf("Nhap da thuc Qm:\n");
                Qm = nhapDaThuc();
                ketQuaThuong.bac = Pn.bac - Qm.bac;
                ketQuaDu.bac = Qm.bac - 1;
                for (int i = Pn.bac; i >= Qm.bac; i--) {
                    ketQuaThuong.heso[i - Qm.bac] = Pn.heso[i] / Qm.heso[Qm.bac];
                    for (int j = 0; j <= Qm.bac; j++) {
                        Pn.heso[i - j] -= ketQuaThuong.heso[i - Qm.bac] * Qm.heso[j];
                    }
                }
                for (int i = 0; i <= ketQuaDu.bac; i++) {
                    ketQuaDu.heso[i] = Pn.heso[i];
                }
                printf("Da thuc thuong la: \n");
                inDaThuc(ketQuaThuong);
                printf("Da thuc du la: \n");
                inDaThuc(ketQuaDu);
                break;
            }
            case 6:
                printf("Ket thuc chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Moi nhap lai.\n");
        }
    } while (luaChon != 6);
    return 0;
}


