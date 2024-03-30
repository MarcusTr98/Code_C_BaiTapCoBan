#include <stdio.h>
struct daThuc{
	int heso[100];
	int bac;
};
typedef struct daThuc dt;
dt nhapdt(){
	dt x;
	printf("Moi ban nhap bac cua da thuc: \n");
	scanf("%d", &x.bac);
	for(int i=0; i<=x.bac;i++){
		printf("Nhap lan luot he so cua da thuc: %d\n", i);
		scanf("%d", &x.heso[i]);
	}
	return x;
}
void indt(struct daThuc a){
	for(int i=0;i<=a.bac;i++){
		if(i==0){
			printf("%d", a.heso[i]);
		}
		else{	
			printf("%dx^%d", a.heso[i], i);
		}
		if(i<a.bac){
			printf("+");
		}
	}printf("\n");
}
void thuongdt(dt P, dt Q, dt *thuong, dt *du){
	thuong->bac=P.bac-Q.bac;
	du->bac=Q.bac-1;
	for(int i= P.bac; i>=Q.bac ;i--){
		thuong->heso[i-Q.bac]=P.heso[i]/Q.heso[Q.bac];
		for(int j=0; j<=Q.bac;j++){
			P.heso[i-j]-=thuong->heso[i-Q.bac]*Q.heso[j];
		}
	}
	for(int i=0;i<=du->bac; i++){
		du->heso[i]=P.heso[i];
	}
}
int main(){
	dt Pn, Qm, kq, kqThuong, kqDu;
	printf("Nhap da thuc Pn\n");
	Pn=nhapdt();
	printf("Nhap da thuc Qm\n");
	Qm=nhapdt();
	thuongdt(Pn,Qm, &kqThuong, &kqDu);
	printf("Da thuc thuong la: \n");
	indt(kqThuong);
	printf("Da thuc du la: \n");
	indt(kqDu);
}