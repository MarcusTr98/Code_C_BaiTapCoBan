#include <stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
void nhapDate(struct Date &d){ // d la phan tu khai bao trong ham
	printf("Nhap vao ngay: ");
	scanf("%d", &d.day);
	printf("\nNhap vao thang: ");
	scanf("%d", &d.month);
	printf("\nNhap vao nam: ");
	scanf("%d", &d.year);	
}
void inDate(struct Date d){
	printf("%d/%d/%d", d.day, d.month, d.year);
}
int checkDate(struct Date d){
	if(d.day<0 || d.month<0 || d.year<0){
		return 0;
	}if(d.month>12){
		return 0;
	}if(d.month==2){
		if(d.day>28){
			return 0;
		}
	}if(d.month==1|| d.month==3|| d.month==5|| d.month==7|| d.month==8|| d.month==10|| d.month==12){
		if(d.day>31){
			return 0;
		}
	}if(d.month==4|| d.month==6|| d.month==9|| d.month==11){
		if(d.day>30){ 
			return 0;		
		}
	}
	return 1;
}
int main(){
	struct Date myDate;
	nhapDate(myDate);
	printf("\n---\n");
	inDate(myDate);
	printf("\nKiem tra ngay hop le: %s", checkDate(myDate)==1?"Hop le!":"Khong hop le!");
}
