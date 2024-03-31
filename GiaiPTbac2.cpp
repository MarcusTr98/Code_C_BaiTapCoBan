#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, delta;
	
	printf("Giai PT bac 2: ax^2 + bx + c = 0");
	printf("\nMoi nhap vao he so a: ");
	scanf("%f", &a);
	printf("\nMoi nhap vao he so b: " );
	scanf("%f", &b);
	printf("\nMoi nhap vap he so c: ");
	scanf("%f", &c);
	
	if(a==0){ 
		if(b==0){
			if(c==0){
				printf("\nPT vo so nghiem.");
			}
			else if(c!=0){
				printf("\nPT vo nghiem.");
			}
		}
		else if(b!=0){
			printf("\nPT co 1 nghiem x = %.2f", -c/b);
		}
	}
	else if(a!=0){
		delta = pow(b,2)-4*a*c;
		
		if(delta<0){
			printf("\nPT vo nghiem.");
		}
		else if(delta==0){
			printf("\nPT co nghiem kep x1 = x2 = %.2f", -b/(2*a));
		}
		else if(delta>0){
			printf("\nPT co 2 nghiem phan biet x1 = %.2f, x2 = %.2f", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a );
		}
	}
	// test: nghiep pbiet ( 1-5-1 ) => x1= -0.21, x2 = -4.79
	// nghiem kep ( 1-2-1 ) => x=-1 
	// vo nghiem (9-2-10 )
	return 0;
}
