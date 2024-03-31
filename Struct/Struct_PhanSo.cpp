#include<stdio.h>
#include<math.h>
struct PhanSo{
	int tuSo;
	int mauSo;
};
void rutGon(PhanSo *ps){
	int a= ps->tuSo;
	int b= ps->mauSo;
	int USCLN=1;
	a=abs(a);
	b=abs(b);
	int bc= a*b;
	if( a==0 || b==0){
		USCLN = a+b;
	}
	else{
		while(a!=b){
			if(a>b){
				a-=b; 
			}else{
				b-=a;
			}
		}USCLN = a;
	}
	ps->tuSo/= USCLN;
	ps->mauSo/= USCLN;
}
void nhapPhanSo(PhanSo *ps){
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tuSo);
	do{
		printf("\nNhap vao mau so: ");
		scanf("%d", &ps->mauSo);		
	}while(ps->mauSo==0);
}
void inPhanSo(PhanSo ps){
	if(ps.mauSo<0){
		ps.tuSo*=-1;
		ps.mauSo*=-1;
	}
	rutGon(&ps);
	printf("%d/%d", ps.tuSo, ps.mauSo);
}
int main(){
	PhanSo ps1, ps2;
	printf("\nPhan so thu nhat: ");
	nhapPhanSo(&ps1);
	printf("\nPhan so thu hai: ");
	nhapPhanSo(&ps2);
	printf("Phan so vua nhap la: ");
	inPhanSo(ps1);
	printf("\t");
	inPhanSo(ps2);
}
