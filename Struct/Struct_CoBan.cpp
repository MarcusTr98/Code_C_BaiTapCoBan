#include<stdio.h>
#include<string.h>
// cau truc
struct sach{
	int maSach;
	int soLuong;
	double donGia;
	char tenSach[50];
};
int main(){
	struct sach quyenSach1;
	quyenSach1.maSach = 001;
	strcpy(quyenSach1.tenSach, "Lap trinh can ban");
	quyenSach1.donGia = 50000;
	quyenSach1.soLuong = 15;
	struct sach quyenSach2;
	quyenSach2.maSach = 002;
	strcpy(quyenSach2.tenSach, "Day nau an");
	quyenSach2.donGia = 59000;
	quyenSach2.soLuong = 10;
	// xuat thong tin
	printf("Thong tin sach!\n");
	printf("Ma sach: %d\n", quyenSach1.maSach);
	printf("Ten sach: %s\n", quyenSach1.tenSach);
	printf("So luong: %d cuon\n", quyenSach1.soLuong);
	printf("Don gia: %.lf VND\n", quyenSach1.donGia);
}
