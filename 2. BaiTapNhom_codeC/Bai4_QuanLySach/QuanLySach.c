#include <stdio.h>
#include <string.h>
#define VAT 0.1
#include <stdlib.h>
struct quanLySach{
    char maSach[10], tenSach[50], tacGia[50], NXB[50];
    int namXB, soLuong;
    float donGia, thanhTien, thue, thucTien; 
};
void nhapThongTinSach(struct quanLySach *sach) {
    fflush(stdin);
	printf("Nhap ma sach: ");
    gets(sach->maSach);
	
    printf("Nhap ten sach: ");
    gets(sach->tenSach);
	
    printf("Nhap tac gia: ");
    gets(sach->tacGia);
	
    printf("Nhap nha xuat ban: ");
    gets(sach->NXB);

    printf("Nhap nam xuat ban: ");
    scanf("%d", &sach->namXB);

    printf("Nhap don gia: ");
    scanf("%f", &sach->donGia);

    printf("Nhap so luong: ");
    scanf("%d", &sach->soLuong);
}
//In thong tin sach ra man hinh
void inDanhSachSach(struct quanLySach *danhSach, int soLuong) {
	int i;
    printf("\nDanh sach thong tin cac cuon sach:\n");
    for (i = 0; i < soLuong; i++) {
        printf("Ma sach: %s\n", danhSach[i].maSach);
        printf("Ten sach: %s\n", danhSach[i].tenSach);
        printf("Tac gia: %s\n", danhSach[i].tacGia);
        printf("Nha xuat ban: %s\n", danhSach[i].NXB);
        printf("Nam xuat ban: %d\n", danhSach[i].namXB);
        printf("Don gia: %.2f\n", danhSach[i].donGia);
        printf("So luong: %d\n", danhSach[i].soLuong);
        printf("Thanh Tien: %.2f\n", danhSach[i].thanhTien);
        printf("Thue: %.2f\n", danhSach[i].thue);
        printf("Thuc tien: %.2f\n", danhSach[i].thucTien);
        printf("\n");
    }
}
//Tinh thanh tien cho sach
void thanhTien(struct quanLySach *sach ,int soLoaiSach){
	int i;
	for(i=0;i<soLoaiSach;i++){
		sach[i].thanhTien = sach[i].soLuong*sach[i].donGia;
		printf("Ma Sach: %s\n",sach[i].maSach);
		printf("Ten Sach: %s\n",sach[i].tenSach);
		printf("Don Gia: %.2f\n",sach[i].donGia);
		printf("So Luong: %d\n",sach[i].soLuong);
		printf("Thanh Tien: %.2f\n",sach[i].thanhTien);
	}
}
//Tinh VAT va thuc tien cho sach
void thucTien(struct quanLySach *sach,int soLoaiSach){
	int i;
	for(i=0;i<soLoaiSach;i++){
		sach[i].thue = sach[i].thanhTien*VAT;
		sach[i].thucTien = sach[i].thanhTien + sach[i].thue;
		printf("Ma Sach: %s\n",sach[i].maSach);
		printf("Ten Sach: %s\n",sach[i].tenSach);
		printf("Don Gia: %.2f\n",sach[i].donGia);
		printf("So Luong: %d\n",sach[i].soLuong);
		printf("Thanh Tien: %.2f\n",sach[i].thanhTien);
		printf("Thue: %.2f\n",sach[i].thue);
		printf("Thuc Tien: %.2f\n",sach[i].thucTien);
	}
}
//sap xep cac cuon sach theo thu tu giam dan ve nam xuat ban 
void sapXep(struct quanLySach *sach, int soLoaiSach){
    struct quanLySach temp;
	int i, j;
    for (i = 0; i < soLoaiSach; i++){
        for(j = i+1; j < soLoaiSach; j++){
            if (sach[i].namXB < sach[j].namXB){
                temp = sach[i];
                sach[i] = sach[j];
                sach[j] = temp;
            }
        }
    }
    printf("Danh sach sach da duoc sap xep theo thu giam dan ve nam xuat ban\n");
}
//in thong tin cac cuon sach co thuc tien lon nhat
void MaxSach(struct quanLySach *sach, int soLoaiSach){
    int i, maxTT;
    maxTT = sach[0].thucTien;
    for (i = 0; i < soLoaiSach; i++){
        if (sach[i].thucTien > maxTT){
            maxTT = sach[i].thucTien;
        }
    }
    printf("Sach co thuc tien lon nhat la: \n");
    printf("%-10s| %-20s| %-20s| %-20s| %-10s| %-10s| %-10s| %-10s| %-10s| %-10s\n", "Ma sach", "Ten sach", "Tac gia", "NXB", "Nam XB", "Don gia","So luong", "Thanh tien", "Thue", "Thuc tien");
    for (i = 0; i < soLoaiSach; i++){
        if (sach[i].thucTien == maxTT){
            printf("%-10s| %-20s| %-20s| %-20s| %-10d| %-10.0f| %-10d| %-10.2f| %-10.2f| %-10.2f\n", sach[i].maSach, sach[i].tenSach,
			sach[i].tacGia, sach[i].NXB, sach[i].namXB, sach[i].donGia, sach[i].soLuong, sach[i].thanhTien, sach[i].thue, sach[i].thucTien);
        }
    }
}
//In ra thong tin tong so long cac cuon sach
void tongSoLuongSach (struct quanLySach *sach, int soLoaiSach) {
	int i, soLuong = 0;
	printf("%-10s| %-20s| %-20s| %-20s| %-10s| %-10s\n", "Ma sach", "Ten sach", "Tac gia", "NXB", "Nam XB", "So luong");
	for ( i = 0; i < soLoaiSach; i++) {
		printf("%-10s| %-20s| %-20s| %-20s| %-10d| %-10d", sach[i].maSach, sach[i].tenSach, sach[i].tacGia, sach[i].NXB, sach[i].namXB, sach[i].soLuong);
		printf("\n");
       	soLuong += sach[i].soLuong;
	}
	printf("Tong so luong sach: %d\n", soLuong);
}
//In ra danh sach cac cuon sach co VAT lon hon 1 gia tri nhap vao tu ban phim
void inDanhSachVAT(struct quanLySach *sach, int soLoaiSach) {
	int i;
	float GTGT;
	printf("Xin moi nhap 1 gia tri thue VAT: ");
	scanf("%f", &GTGT);
	printf("Danh sach cac loai sach co thue VAT lon hon %.2f la:\n", GTGT);
	printf("%-10s| %-20s| %-20s| %-20s| %-10s| %-10s| %-10s| %-10s| %-10s| %-10s\n", "Ma sach", "Ten sach", "Tac gia", "NXB", "Nam XB", "Don gia","So luong", "Thanh tien", "Thue", "Thuc tien");
	for (i = 0; i < soLoaiSach; i++) {
		if (sach[i].thue > GTGT) {
			printf("%-10s| %-20s| %-20s| %-20s| %-10d| %-10.0f| %-10d| %-10.0f| %-10.0f| %-10.0f\n", sach[i].maSach, sach[i].tenSach,
			sach[i].tacGia, sach[i].NXB, sach[i].namXB, sach[i].donGia, sach[i].soLuong, sach[i].thanhTien, sach[i].thue, sach[i].thucTien);
		}
	}
}

//luu danh sach cac cuon sach vao tap tin
void luu_sach_vao_tap_tin(struct quanLySach *ds_sach, int so_luong_sach) {
	FILE *file= fopen("danh_sach_sach.txt","w");
	if(file == NULL) {
		printf("Khong the mo file de ghi.\n");
		return;		
	}	
	//in ra dong dau tien cho bang
	fprintf(file,"%-10s | %-20s | %-20s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s\n",
	"Ma sach", "Ten sach", "Tac gia", "Nha Xuat ban", "Nam xuat ban", "Don gia", "So luong", "Thanh tien", "Thue", "Thuc tien");
	
	int i;
	for(i=0;i< so_luong_sach;i++){
		fprintf(file, "%-10s | %-20s | %-20s | %-20s | %-10d  |%-10.2f  | %-10d  | %-10.2f  | %-10.2f  | %-10.2f\n", ds_sach[i].maSach,
		 ds_sach[i].tenSach, ds_sach[i].tacGia, ds_sach[i].NXB, ds_sach[i].namXB, 
				ds_sach[i].donGia,ds_sach[i].soLuong, ds_sach[i].thanhTien, 
				ds_sach[i].thue, ds_sach[i].thucTien);
	}
	fclose(file);
	printf("Da luu danh sach sach vao file thanh cong.\n");
}
//doc danh sach cac cuon sach tu tap tin v� hien thi len man hinh
void doc_va_hien_thi_sach_tu_tap_tin() {
	FILE *file=fopen("danh_sach_sach.txt","r");
	if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return;
    }
    struct quanLySach sach;
    
    fscanf(file, "%*s %*s %*s %*s %*s %*s %*s %*s %*s %*s"); 
    printf("\nDanh sach cac cuon sach:\n");
    printf("%-10s | %-20s | %-20s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s | %-10s\n",
           "Ma sach", "Ten sach", "Tac gia", "Nha Xuat ban", "Nam xuat ban", "Don gia", "So luong", "Thanh tien", "Thue", "Thuc tien");


    while (fscanf(file, "%-10s %-20s %-20s %-20s %-10d %-10f %-10d %-10f %-10f %-10f\n", sach.maSach, sach.tenSach,
           sach.tacGia, sach.NXB, &sach.namXB, &sach.donGia, &sach.soLuong, &sach.thanhTien,
           &sach.thue, &sach.thucTien) != EOF) {
        printf("%-10s | %-20s | %-20s | %-20s | %-10d | %-10.2f | %-10d | %-10.2f | %-10.2f | %-10.2f\n",
               sach.maSach, sach.tenSach, sach.tacGia, sach.NXB, sach.namXB,
               sach.donGia, sach.soLuong, sach.thanhTien, sach.thue, sach.thucTien);
    }
    printf("\nDanh sach cac cuon sach:\n");   
    fclose(file);
}

int main() {
    struct quanLySach danhSachSach[50], temp;
    int soLoaiSach, luaChon, i;
    int n;
    do {
        printf("++-----------------------------------------------------------------------------++\n");
        printf("| Chuong trinh quan ly sach\t\t\t\t\t\t\t|\n");
        printf("| 1. Nhap thong tin sach\t\t\t\t\t\t\t|\n");
        printf("| 2. In danh sach thong tin cac cuon sach\t\t\t\t\t|\n");
        printf("| 3. Tinh gia tri sach\t\t\t\t\t\t\t\t|\n");
        printf("| 4. Tinh thuc tien phai tra\t\t\t\t\t\t\t\t|\n");
        printf("| 5. Sap xep cac cuon sach theo thu tu giam dan ve nam xuat ban\t\t\t|\n");
        printf("| 6. In thong tin cac cuon sach co thuc tien lon nhat\t\t\t\t|\n");
        printf("| 7. In thong tin tong so luong cac cuon sach\t\t\t\t\t|\n");
        printf("| 8. IN danh sach cac cuon sach co VAT lon hon gia tri nhap vao tu ban phim\t|\n");
        printf("| 9. Luu danh sach cac cuon sach da nhap vao tap tin\t\t\t\t|\n");
        printf("| 10. Doc danh sach cac cuon sach tu tap tin va hien thi len man hinh\t\t|\n");
        printf("| 0. Thoat khoi chuong trinh\t\t\t\t\t\t\t|\n");
        printf("++-----------------------------------------------------------------------------++\n");
        printf("Xin moi chon chuong trinh (0-10): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Nhap so luong cuon sach: ");
                scanf("%d", &soLoaiSach);

                for (i = 0; i < soLoaiSach; i++) {
                    printf("\nNhap thong tin cho cuon sach thu %d:\n", i + 1);
                    nhapThongTinSach(&danhSachSach[i]);
                }
                break;

            case 2:
                if (soLoaiSach > 0) {
                    inDanhSachSach(danhSachSach, soLoaiSach);
                } else {
                    printf("Danh sach dang trong. Moi them du lieu!\n");
                }
                break;
            case 3:
            	thanhTien(danhSachSach, soLoaiSach);
                break;
            case 4:
            	thucTien(danhSachSach, soLoaiSach);
                break;
            case 5:
                sapXep(danhSachSach, soLoaiSach);
                break;
            case 6:
            	MaxSach(danhSachSach, soLoaiSach);
                break;
            case 7:
            	printf("So luong cac loai sach:\n");
            	tongSoLuongSach (danhSachSach, soLoaiSach);
                break;
            case 8:
            	inDanhSachVAT(danhSachSach, soLoaiSach);
                break;
            case 9:
            	luu_sach_vao_tap_tin(danhSachSach, soLoaiSach);
                break;
            case 10:
            	doc_va_hien_thi_sach_tu_tap_tin();
                break;
            case 0:
            	printf("Thoat chuong trinh\n");
                break;
            default:
            	printf("Xin moi chon lai chuong trinh (0-10)\n");
                break;
        }
    } while (luaChon != 0);
    
    return 0;
}
