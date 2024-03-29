#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct SinhVien{
	char mssv[8],hoten[50],gioitinh[8];
	int tuoi;
	float diemWeb,diemlaptrinhC,diemtienganh,diemTB;
}sv;
int i;
void themsinhvien(struct SinhVien&sv){
	fflush(stdin);
	printf("\nNhap ma so sinh vien: "); gets(sv.mssv);
	printf("\nNhap ho ten: "); gets(sv.hoten);
	printf("\nNhap gioi tinh: "); gets(sv.gioitinh);
	printf("\nNhap tuoi: "); scanf("%d",&sv.tuoi);
	printf("\nNhap diem Web: "); scanf("%f",&sv.diemWeb);
	printf("\nNhap diem lap trinh C: "); scanf("%f",&sv.diemlaptrinhC);
	printf("\nNhap diem tieng anh: "); scanf("%f",&sv.diemtienganh);
	 	
}

void hiensinhvien(struct SinhVien&sv){
	printf("\n--------------------------------\n");
	printf("\nMa so sinh vien: %s",sv.mssv);
	printf("\nHo ten: %s",sv.hoten);
	printf("\nGioi tinh: %s",sv.gioitinh);
	printf("\nTuoi: %d",sv.tuoi);
	printf("\nDiem Web: %.2f",sv.diemWeb);
	printf("\nDiem lap trinh C: %.2f",sv.diemlaptrinhC);
	printf("\nDiem tieng anh: %.2f",sv.diemtienganh);
	
}

int main(){
	int i,n;
	printf("Nhap so luong sinh vien muon them: ");
	scanf("%d",&n);
	struct SinhVien;
	for(i=0;i<n;i++){
	themsinhvien(sv);
}
	
	printf("\n--------------------------------\n");
	
	for(i=0;i<n;i++){
	hiensinhvien(sv);
}
	FILE*f;
	f=fopen("SinhVien.txt","a");
	if(f==NULL){
		printf("\nKhong the mo file");
		return 0;
	}
	for(i=0;i<n;i++){
		struct SinhVien;
		fprintf(f,"\nMa so sinh vien: %s",sv.mssv);
		fprintf(f,"\nHo ten: %s",sv.hoten);
		fprintf(f,"\nGioi tinh: %s",sv.gioitinh);
		fprintf(f,"\nTuoi: %d",sv.tuoi);
		fprintf(f,"\nDiem Web: %.2f",sv.diemWeb);
		fprintf(f,"\nDiem lap trinh C: %.2f",sv.diemlaptrinhC);
		fprintf(f,"\nDiem tieng anh: %.2f",sv.diemtienganh);

	}
	fclose(f);
	return 0;
}
