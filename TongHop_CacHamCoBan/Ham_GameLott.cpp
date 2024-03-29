#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	time_t seconds;
	seconds = time(NULL);
	srand((unsigned)seconds);
	int so;
	printf("Moi ban chon so 1-->15: ");
	scanf("%d", &so);
	printf("So ban da chon la: %d", so);
	int soNgauNhien = rand()%15 + 1;
	printf("\nQuay so: %d", soNgauNhien);
	if( so==soNgauNhien ){
		printf("\nChuc mung ban da trung doc dac!");
	}else{
		printf("\nChuc ban may man lan sau.");
	}
	return 0;	
}
