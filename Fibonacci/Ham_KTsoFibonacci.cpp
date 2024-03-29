#include<stdio.h>
int fibonacci1(long long n){
	if(n==0 || n==1){
		return 1;
	}
	long long f0=0, f1=1, fn;
	for(int i=3; i<=93; i++){
			fn=f0+f1;
			if(fn==n){
				return 1;
			}
			f0=f1;
			f1=fn;
	}
	return 0;
}
int main(){
		long long n;
		printf("Nhap so can kiem tra: ");		
		scanf("%lld", &n);
		if(fibonacci1(n)){
			printf("YES\n");
		}else
			printf("NO\n");
}
