#include<stdio.h>
#include<math.h>
struct dathuc{
	int bac;
	float heso[100];
};
float giatridathuc(struct dathuc dt, float x){
	float ketqua = 0.0f;
	for (int i = 0; i <= dt.bac; ++i){
		ketqua += dt.heso[i] * powf(x, dt.bac - i);
	}
	return ketqua;
}
int main(){
	float x0;
	printf("nhap gia tri x0:\n ");
	scanf("%f",&x0);
	
	struct dathuc Pn;
	printf("nhap bac cua da thuc Pn:\n ");
	scanf("%d",&Pn.bac);
	printf("nhap he so cua da thuc Pn tu bac cao den bac thap:\n");
	for(int i = Pn.bac; i >= 0; --i){
		scanf("%f",&Pn.heso[i]);
	}
	struct dathuc Qm;
	printf("nhap bac cua da thuc Qm: ");
	scanf("%d",&Qm.bac);
	printf("nhap he so cua da thuc Qm tu bac cao den bac thap:\n");
	for (int i = Qm.bac; i>= 0; --i){
	scanf("%f",&Qm.heso[i]);
	}
	float ketqua_Pn = giatridathuc(Pn, x0);
	float ketqua_Qm = giatridathuc(Qm, x0);
	printf("Pn(%.0f)=%.0f\n",x0,ketqua_Pn);
	printf("Qm(%.0f)=%.0f\n",x0,ketqua_Qm);
	
	return 0;
}