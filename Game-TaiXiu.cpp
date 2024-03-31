#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#define max 99

int ketqua()
{
	srand( (unsigned int)time(NULL) ); //bo sinh so ngau nhien
	int kqua= rand() % max+1;
    return kqua;
}
void luachon(int &n){
 	do{
 		printf("Ban chon: ");
 		scanf("%d",&n);
 		if (n<1 || n>2){
 			printf("Hay nhap lai ! Chon 1(Le) hoac 2(Chan)\n");
       	}
   	}while (n<1 || n>2);
	switch(n){
		case 1:printf("*Ban chon Le\n"); break; 
		case 2:printf("*Ban chon Chan\n"); break;
	}
}
void luachon2(int &m){
	do{
	printf("\nBan chon: ");	scanf("%d",&m);
 		if (m<3 || m>4){
		printf("Hay nhap lai ! Chon 3(Tai) hoac 4(Xiu)\n");
		}
	}while (m<3 || m>4);
 	switch(m){
 		case 3:printf("*Ban chon Tai\n"); break; 
 		case 4:printf("*Ban chon Xiu)\n"); break;
	}
}
/*void menu(){
	printf("\n1.Le (1,3,5,7,9)");
	printf("\n2.Chan (0,2,4,6,8)\n");
}*/
/*void menu2(){
	printf("\n3.Tai (50 -> 99)");
	printf("\n4.Xiu (1 -> 49)");
}*/
int main(){
	int n, m;
	int cuoc, cuoc2, tien;
	printf("CHUONG TRINH QUAY SO ZUI ZEEE!\n");
	printf("------------------------------\n");
	printf("Xin moi nap xu: ");
	scanf("%d", &tien);
	do{
		printf("\nBan dang co: %d xu", tien);		
		//menu();
		printf("\nXin moi lua chon: ");
		printf("\n1.Le (1,3,5,7,9)");
		printf("\n2.Chan (0,2,4,6,8)\n");
		luachon(n);
 		do{ 
 			printf("Muc cuoc (xu): ");
 			scanf("%d", &cuoc); 
			if (cuoc > tien){
				printf("So tien cuoc <= So tien cua ban\n");
			}
		} while (cuoc > tien);
		//menu2();
		printf("\nXin moi lua chon: ");
		printf("\n3.Tai (50 -> 99)");
		printf("\n4.Xiu (1 -> 49)");
		luachon2(m);
		int tien2= tien-cuoc; //da tru tien cuoc tro 1
 		do{ 
	  		printf("Muc cuoc (xu): ");
			scanf("%d", &cuoc2);
			if (cuoc2 > tien2){
				printf("So tien cuoc <= So tien hien co cua ban!\n");
			}
    	} while (cuoc2 > tien2);
    	
		int kq= ketqua();
		printf("\nCon so may man la : %d\n",kq);
		// kta kq chan-le
		int o, h; // 2 bien tam
 		if (kq%2 != 0){
			printf("Le");
			o=1;
 		}else{
			printf("Chan");
			o=2;
 		}
 		if (n==o){
 			tien= tien+cuoc;
			printf("(WIN) +%d xu\n",cuoc);
		}else{
			tien=tien-cuoc;
			printf("(LOST) -%d xu\n",cuoc);
		}
		//kta kq tai-xiu
		if (kq >= 50){
			printf("Tai");
			h=3;
		}else{
			printf("Xiu");
			h=4;
 		}
		if (m==h){
 			tien=tien+cuoc2;
 			printf("(WIN) +%d xu\n",cuoc2);
 			printf("Ban dang co: %d xu",tien);
 		}else{
 			tien=tien-cuoc2;
 			printf("(LOST) -%d xu\n",cuoc2);
 			printf("Ban dang co: %d xu",tien);
 		}
 		if(tien==0){
 			printf("\nVay la ban da het sach tien roi! Bye.bye ^^.");
 			break;
		}
 		getch();
		system("cls"); // xoa man hinh
 	} while (true);
}
