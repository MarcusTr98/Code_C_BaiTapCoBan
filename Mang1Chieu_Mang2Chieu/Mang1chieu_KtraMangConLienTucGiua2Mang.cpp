#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100], b[100];
int n1, n2;
// mang lien tuc
void nhapMang(int x[100], int &n){
	do{
		printf("Nhap vao so luong phan tu cua mang: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\nGia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int kiemTraMangCon(int x1[100], int n1, int x2[100], int n2){
	int kq=0;
	if(n2<=n1){
		for(int i=0; i<n1; i++){
			if( x1[i] == x2[0]){
				int j;
				for( j=0 ; j<n2; j++){
					if(x1[i+j] != x2[j]){
						break;
					}
				}
				if(j==n2){
					kq=1;
				}
			}
		}
	}else{
		return 0;
	}	
	return kq;
}

int main(){
	printf("\n--------\n");	
	nhapMang(a, n1);
	xuatMang(a, n1);
	printf("\n--------\n");	
	nhapMang(b, n2);
	xuatMang(b, n2);	
	printf("\n--------\n");
	int kt = kiemTraMangCon(a, n1, b,n2);
	if(kt){
		printf("Mang b la mang con cua mang a.");
	}else{
		printf("Mang b ko la mang con cua mang a.");
	}	
}
