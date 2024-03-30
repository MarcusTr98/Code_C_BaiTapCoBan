#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct HoTen{
	char ho[7];
	char dem[7];
	char ten[7];
};
struct SinhVien{
    char maSV[8], gioiTinh[5];
    HoTen tenSV;
    int tuoi;
    float diemWeb, diemLT, diemTA, diemTB;
};
void Nhap(SinhVien sv[], int &n);
void inSinhVien(SinhVien sv);
void Xuat(SinhVien sv[], int n);
void SapXepTen(SinhVien ds[], int n);
void SapXepDiem(SinhVien ds[], int n);
void TimKiemSV(SinhVien ds[]);
void GhiFile(SinhVien ds[], int n);

void Nhap(SinhVien sv[], int &n){
	printf("\nNhap so sinh vien muon them: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nNHAP THONG TIN SINH VIEN: %d!\n",i+1);
        
		do{
			printf("Nhap MSSV: ");
        	fflush(stdin);
        	gets(sv[i].maSV);
        	if( strlen(sv[i].maSV) !=7 ){ 
				printf("\nNhap lai MSSV, toi da 7 ky tu!\n");        		
			}
		}while( strlen(sv[i].maSV) !=7 );
		
        printf("Nhap ten SV: "); 
        scanf("%s%s%s", &sv[i].tenSV.ho, &sv[i].tenSV.dem, &sv[i].tenSV.ten);
        printf("Nhap tuoi SV: ");
        scanf("%d", &sv[i].tuoi);       	
		printf("Nhap gioi tinh: ");
        fflush(stdin);
        gets(sv[i].gioiTinh);
        printf("Nhap diem Web - diem Lap Trinh - diem Tieng Anh: ");
        scanf("%f%f%f", &sv[i].diemWeb, &sv[i].diemLT, &sv[i].diemTA);
        sv[i].diemTB= (sv[i].diemWeb+sv[i].diemLT+sv[i].diemTA)/3;
    }
}
void inSinhVien(SinhVien sv){
	printf("%8s\t%4s %s %s\t%8d\t%10s\t%8.2f\t%8.2f\t%8.2f\t%8.2f",
	sv.maSV, sv.tenSV.ho, sv.tenSV.dem, sv.tenSV.ten , sv.tuoi, sv.gioiTinh, sv.diemWeb, sv.diemLT, sv.diemTA, sv.diemTB);
} 
void Xuat(SinhVien sv[], int n){
    printf("\nTHONG TIN SINH VIEN!\n");
    printf("%8s\t%12s\t%8s\t%10s\t%8s\t%8s\t%8s\t%8s",
	"MSSV", "Ten SV", "Tuoi", "Gioi Tinh", "Web", "Lap Trinh", "Tieng Anh", "Diem TB");
	printf("\n");
    for(int i=0; i<n; i++){    	
		inSinhVien(sv[i]);
    	printf("\n");		
    }
}
void SapXepTen(SinhVien ds[], int n){ 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if( strcmp (ds[i].tenSV.ten, ds[j].tenSV.ten) <0 ){
				SinhVien Temp;				
				Temp = ds[i];
				ds[i] = ds[j];
				ds[j] = Temp;
			}
		}
	}
	printf("\nDANH SACH SV XEP THEO TEN!");
	Xuat(ds ,n);
}
void SapXepDiem(SinhVien ds[], int n){ 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(ds[i].diemTB > ds[j].diemTB){
				SinhVien Temp;				
				Temp = ds[i];
				ds[i] = ds[j];
				ds[j] = Temp;		
			}
		}
	}
	printf("\nDANH SACH SV XEP THEO DIEM GIAM DAN!");
	Xuat(ds ,n);
}
void TimKiemSV(SinhVien ds[]){ 
    char MSSV[8];
    int count=0;
    printf("\nNhap ma sinh vien can tim: ");
    fflush(stdin);
    gets(MSSV);
	for(int i=0; i<strlen(ds[i].maSV); i++){
		if( strcmp(ds[i].maSV, MSSV) == 0){
			count++;
			printf("\nTIM THAY SINH VIEN!\n");			
    		printf("%8s\t%12s\t%8s\t%10s\t%8s\t%8s\t%8s\t%8s", "MSSV", "Ten SV", "Tuoi", "Gioi Tinh", "Web", "Lap Trinh", "Tieng Anh", "Diem TB");
			printf("\n");	
			inSinhVien(ds[i]);
		}
    }
    if(count==0){
    	printf("\nKHONG TIM THAY SINH VIEN!");
	}
}
void GhiFile(SinhVien ds[], int n){
	FILE *f;
	f = fopen("SV.txt", "w");
	if(f == NULL){
		printf("\nLoi mo file!");
		return;
	}
	fprintf(f, "%s\t\t%s\t\t%s\t%s\t%s\t\t%s\t%s\t%s\n", "MSSV", "Ten SV", "Tuoi", "Gioi Tinh", "Web", "Lap Trinh", "Tieng Anh", "Diem TB");
	for(int i=0; i<n; i++){
		struct SinhVien;	
		fprintf(f, "%s\t\t%s %s %s\t%d\t%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", ds[i].maSV, ds[i].tenSV.ho, ds[i].tenSV.dem, ds[i].tenSV.ten , ds[i].tuoi, ds[i].gioiTinh, ds[i].diemWeb, ds[i].diemLT, ds[i].diemTA, ds[i].diemTB);
	}
	fclose(f);
}

int main(){
	int n;
    SinhVien sv[100];
    int q=0, so;
    bool daNhap = false;
    do{
    	printf("\n");
        printf("+-----------------------------------------------+\n");
        printf("|******* CHUONG TRINH QUAN LY SINH VIEN ********|\n");
        printf("|\t1. Them moi SV vao danh sach.\t\t|\n");
        printf("|\t2. Hien thi danh sach SV.\t\t|\n");
        printf("|\t3. Sap xep SV theo ten a -> z.\t\t|\n");
        printf("|\t4. Sap xep SV theo diem TB giam dan.\t|\n");
        printf("|\t5. Tim kiem thong tin SV\t\t|\n");
        printf("|\t6. Ghi thong tin SV vao file SV.txt\t|\n");        
        printf("|\t7. THOAT CHUONG TRINH\t\t\t|\n");
        printf("+-----------------------------------------------+\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &so);
        switch(so){
            case 1:
                printf("\nBan da chon Them moi SV vao danh sach!");
				Nhap(sv, n);
				daNhap = true;
                printf("\nBAN DA NHAP THANH CONG!");
                break;
            case 2:
            	if(daNhap){
                	printf("\nBan da chon Hien thi danh sach SV!");
                    Xuat(sv, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }break;
            case 3:
            	if(daNhap){
                printf("\nBan da chon Sap xep SV theo ten a -> z!");
                SapXepTen(sv, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }break;               
            case 4:
            	if(daNhap){
                	printf("\nBan da chon Sap xep SV theo diem TB giam dan!");
                	SapXepDiem(sv, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }break;
            case 5:
            	if(daNhap){
                	printf("\nBan da chon Tim kiem thong tin SV!");
                	TimKiemSV(sv);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }break;	
            case 6:
            	if(daNhap){            	
                	printf("\nBan da chon Ghi thong tin SV vao file SV.txt!");
                	GhiFile(sv, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
				}
				break;				
            case 7:
                printf("\nTHOAT CHUONG TRINH!");
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nXin moi nhap lai!");
                break;
        }
    }while(!q);
}
