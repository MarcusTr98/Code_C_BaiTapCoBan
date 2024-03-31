#include <stdio.h>
int main()
// tim so ngay trong thang
// nam %400 ==0 hoac nam %4 ==0 && nam&100!=0
{
	int month, year;
	printf("Nhap vao thang can tra cuu: ");
	scanf("%d",&month);
	
	switch(month){
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Co 31 ngay.");
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Co 30 ngay.");
			break;
			
		case 2:
			printf("Nhap them nam de tra cuu: ");
			scanf("%d",&year);
			
			if( (year%400==00) || (year%4==0 && year%100!=0) ){
				printf("Co 29 ngay.");
			}else{
				printf("Co 28 ngay.");
			}
			break;
			
		default:
			printf("Nhap du lieu khong dung, chi nhap tu 1 den 12.");
	}
	return 0;
}
