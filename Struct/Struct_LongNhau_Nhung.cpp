#include<stdio.h>
#include<string.h>
// cau truc nhung
/*struct sinhVien{
	int MSSV;
	char ten[20];
	struct Date{
		int ngay;
		int thang;
		int nam;	
	};
}sv1; */
// cau truc long
struct sinhvien{
	int maSV;
	char tenSV[50];
	struct Date{
		int ngay;
		int thang;
		int nam;
	}NgaySinh;
};
int main(){
	struct sinhvien sv1;
	sv1.maSV = 001;
	strcpy(sv1.tenSV, "Nguyen Van An");
	sv1.NgaySinh.ngay =26;
	sv1.NgaySinh.thang =05;
	sv1.NgaySinh.nam =2002;	
	printf("Thong tin sinh vien!\n");
	printf("Ma sinh vien: %d\n", sv1.maSV);
	printf("Ten sinh vien: %s\n", sv1.tenSV);
	printf("Ngay sinh: %d/%d/%d", sv1.NgaySinh.ngay, sv1.NgaySinh.thang, sv1.NgaySinh.nam);
	return 0;
}

