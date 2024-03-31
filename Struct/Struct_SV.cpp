#include<stdio.h>
struct student {
	int id;
	char name[10];
};
int main(){
	int i;
	struct student sv[5];
	printf("Nhap thong tin cho 5 sinh vien: \n");
	for(i=0; i<5; i++){
		printf("Nhap ID: ");
		scanf("%d", &sv[i].id);
		printf("Nhap Name: ");
		scanf("%s", &sv[i].name);
	}
	printf("Danh sach sinh vien: \n");
	for(i=0; i<5; i++){
		printf("ID: %d, Name: %s\n", sv[i].id, sv[i].name);
	}
}
