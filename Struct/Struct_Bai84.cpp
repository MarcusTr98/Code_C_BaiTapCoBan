#include<stdio.h>
#include<string.h>
#include<time.h>

struct date{
	int ngay;
	int thang;
	int nam;
};

struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diem1;
	float diem2;
	float diem3;
	float diemTB;
	char hocLuc[12];
	char maLop[10];
};
typedef SinhVien SV; // viet tat

void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
void tinhTuoi(SV &sv);
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoai(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, int id);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void tinhDiemTrungBinh(SV *sv){
	sv->diemTB= (sv->diem1+sv->diem2+sv->diem3)/3;
}
void xepLoai(SV &sv){
	if(sv.diemTB>9){
		strcpy(sv.hocLuc, "XUAT SAC");
	}else if(sv.diemTB>8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTB>7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTB>5){
		strcpy(sv.hocLuc, "TRUNG BINH");
	}else{
		strcpy(sv.hocLuc, "YEU");
	}
}
void nhapSinhVien(SV &sv){
	printf("\nNhap ma SV: "); scanf("%d", &sv.id); 
	printf("\nNhap ten SV: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin);
	xoaXuongDong(sv.ten);
	printf("\nNhap gioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin);
	xoaXuongDong(sv.gioiTinh);
	printf("\nNhap ngay sinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	printf("\nDiem mon 1: "); scanf("%f", &sv.diem1);
	printf("\nDiem mon 2: "); scanf("%f", &sv.diem2);
	printf("\nDiem mon 3: "); scanf("%f", &sv.diem3);
	printf("\nNhap ma lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin);
	xoaXuongDong(sv.maLop);
}

void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm* NOW = localtime(&TTIME);
	int namHienTai = NOW->tm_year+1900; // may tinh bo 1900
	sv.tuoi = namHienTai - sv.ngaySinh.nam;
}
void capNhatSinhVien(SV &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	tinhDiemTrungBinh(&sv);
	xepLoai(sv);
}
void nhapDanhSachSinhVien(SV ds[], int &n){
	do{
		printf("\nNhap vao so luong sinh vien them moi: ");
		scanf("%d", &n);
	}while(n<=0);
	for(int i=0; i<n; i++){
		printf("\nNhap vao sinh vien thu %d: ", i+1);
		capNhatSinhVien(ds[i]);
	}
}
void inSinhVien(SV sv){
	printf("%5d\t%20s\t%10s\t%2d/%d/%d\t%4d\t%6.2f\t%6.2f\t%6.2f\t%6.2f\t%12s\t%8s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diem1, sv.diem2, sv.diem3, sv.diemTB, sv.hocLuc, sv.maLop);
}

void xuatDanhSachSinhVien(SV ds[], int n){
		printf("%5s\t%20s\t%10s\t%10s\t%4s\t%6s\t%6s\t%6s\t%6s\t%12s\t%8s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "Xep Loai", "Ma Lop");
		printf("\n");
	for(int i=0; i<n; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}
float timMax_DiemTrungBinh(SV ds[], int n){
	float max=ds[0].diemTB;
	for(int i=0; i<n; i++){
		if(max< ds[i].diemTB){
			max=ds[i].diemTB;
		}
	}
	return max;
}
int timMin_Tuoi(SV ds[], int n){
	int min= ds[0].tuoi;
	for(int i=0; i<n; i++){
		if(min> ds[i].tuoi){
			min=ds[i].tuoi;
		}
	}
	return min;
}

void xuatDanhSachSinhVienXepLoai(SV ds[], int n){
	printf("\nDanh sach SV xep loai Gioi.\n");
	printf("%5s\t%20s\t%10s\t%10s\t%4s\t%6s\t%6s\t%6s\t%6s\t%12s\t%8s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "Xep Loai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n; i++){
		if(strcmp( ds[i].hocLuc,"GIOI") ==0){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}	
}
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
	printf("\nDanh sach sinh vien thuoc lop %s\n", lop);
	printf("%5s\t%15s\t%10s\t%10s\t%4s\t%6s\t%6s\t%6s\t%6s\t%12s\t%8s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "Xep Loai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n; i++){
		if(strcmp((ds[i].maLop), lop)){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}	
}
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	for(int i=0; i<n; i++){
		if(strstr ((ds[i].ten), ten)){
		return 1;
		}
	}
	return 0;
}
void xoaSinhVienTheoId(SV ds[], int &n, int id){
	for(int i=0; i<n; i++){
		if(ds[i].id == id){
			for(int j=i; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
		}
	}
}
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTB > ds[i].diemTB){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){ // a=> z
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(ds[i].ten, ds[j].ten) <0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}	
}
int main(){
	SV ds[100];
	int n;
	nhapDanhSachSinhVien(ds, n);
	printf("\nDanh sach SV sau nhap!\n");
	xuatDanhSachSinhVien(ds, n);

	printf("\nMax DTB = %.2f", timMax_DiemTrungBinh(ds, n));
	printf("\nMin Tuoi = %d", timMin_Tuoi(ds, n));
	
	xuatDanhSachSinhVienXepLoai(ds, n);
	xuatDanhSachSinhVienTheoLop(ds, n, "DH01");
		
	printf("\nKQ tim SV: %d", timSinhVienTheoTen(ds, n, "An"));
	
	sapXepDanhSachSinhVienTheoDTB(ds, n);
	printf("\nDanh sach sau khi sap xep theo DTB\n");
	xuatDanhSachSinhVien(ds,n);
	
	sapXepDanhSachSinhVienTheoTen(ds, n);
	printf("\nDanh sach sau khi sap xep theo ten\n");
	xuatDanhSachSinhVien(ds,n);	
}
