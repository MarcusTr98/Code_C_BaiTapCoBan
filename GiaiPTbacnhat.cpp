#include <stdio.h>
int main()
{
	float a, b; 
	printf("Giai PT bac 1: ax + b =0 ");
	printf("\nMoi nhap vao he so a: ");
	scanf("%f", &a);
	printf("\nMoi nhap vao he so b: ");
	scanf("%f", &b);
	
	if(a==0){
		if (b==0){
			printf("\nPT bac nhat co vo so nghiem.");
		}
		else{
			printf("\nPT bac nhat vo nghiem ");
		}
	}
	else{
		printf("\nPhuong trinh co nghiem x = %.2f", -b/a);
	}
	return 0;
}
