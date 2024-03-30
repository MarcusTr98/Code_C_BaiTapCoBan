#include <stdio.h>
struct daThuc{
	int bac;
	int heso[100];
};
struct daThuc nhapdt(){
	struct daThuc dt;
	printf("Xin moi nhap bac cua da thuc\n");
	scanf("%d", &dt.bac);
	printf("Nhap cac he so cua da thuc\n");
	for(int i=0;i<=dt.bac;i++){
		printf("Moi nhap he so %d: ",i);
		scanf("%d", &dt.heso[i]);
		}
	return dt;
	}
	
void indt(struct daThuc dt){
	for(int i=0;i<=dt.bac;i++){
		printf("%dx^%d", dt.heso[i], i);
		if(i<dt.bac){
			printf("+");
		}		
	}printf("\n");
}
struct daThuc daoham(struct daThuc dt){
	struct daThuc dham;
	dham.bac=dt.bac-1;
	for(int i=0;i<=dham.bac;i++){
		dham.heso[i]=(i+1)*dt.heso[i+1];
	}
	return dham;
}
int main(){
	struct daThuc P,kq;
	printf("Nhap da thuc P: \n");
	P=nhapdt();
	printf("Dao ham bac 1 cua da thuc P la: \n");
	kq=daoham(P);
	indt(kq);
}