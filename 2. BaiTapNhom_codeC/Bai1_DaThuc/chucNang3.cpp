#include <stdio.h>
struct DaThuc{
	int bac;
	int heso[100];
};

int i;


struct DaThuc nhapDaThuc(){
	struct DaThuc dt;
	printf("Nhap bac cua da thuc: \n");
	scanf("%d", &dt.bac);
	printf("Nhap cac he so tu bac O: \n");
	for(i=0;i<=dt.bac;i++){
		printf("He so bac %d la: ", i);
		scanf("%d", &dt.heso[i]);
	}
	return dt;
}
void inDaThuc(struct DaThuc dt){
	for(int i=0; i<=dt.bac;i++){
		printf("%dx^%d", dt.heso[i], i);
		if(i<dt.bac){
			printf("+");
		}	
	}
	printf("\n");
}
struct DaThuc tongdt(struct DaThuc Pn, struct DaThuc Qm) { 
   struct DaThuc tong;
   int bacMax; 
   if ( Pn.bac > Qm.bac ) {
   	bacMax = Pn.bac;
   } if (Qm.bac > Pn.bac) {
   	bacMax = Qm.bac;
   }
   tong.bac = bacMax;
   for ( int i = 0; i <= bacMax; i++) {
   	int heso1, heso2; 
   	if (i <= Pn.bac) {
   		heso1 = Pn.heso[i];
	   } else {
	   	heso1 = 0;
	   } 
	   if (i <= Qm.bac) {
	   	heso2 = Qm.heso[i];
	   } else {
	   	heso2 = 0;
	   }
   	tong.heso[i]= heso1 + heso2; 
   }
   return tong;	
}

struct DaThuc hieudt(struct DaThuc Pn, struct DaThuc Qm) { 
   struct DaThuc hieu;
   int bacMax; 
   if ( Pn.bac > Qm.bac ) {
   	bacMax = Pn.bac;
   } if (Qm.bac > Pn.bac) {
   	bacMax = Qm.bac;
   }
   hieu.bac = bacMax;
   for ( int i = 0; i <= bacMax; i++) {
   	int heso1, heso2; 
   	if (i <= Pn.bac) {
   		heso1 = Pn.heso[i];
	   } else {
	   	heso1 = 0;
	   } 
	   if (i <= Qm.bac) {
	   	heso2 = Qm.heso[i];
	   } else {
	   	heso2 = 0;
	   }
   	hieu.heso[i]= heso1 - heso2; 
   }
   return hieu;	
}
int main(){
	struct DaThuc Pn, Qm, kqThuong, kqDu, kq;
        printf("Nhap da thuc Pn:\n");
        Pn = nhapDaThuc();
        printf("Nhap da thuc Qm:\n");
        Qm = nhapDaThuc();
        printf("Pn + Qm = \n");
        kq=tongdt(Pn,Qm);
        inDaThuc(kq);
        printf("Pn - Qm = \n");
        kq=hieudt(Pn,Qm);
        inDaThuc(kq);
}