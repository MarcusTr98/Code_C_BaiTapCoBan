#include <stdio.h>
int main()
// vong lap for
// for(diem bat dau; dieukien; buoc nhay)
// vidu: xuat cac con so tu 0 > n ( n nhap tu ban phim )
{
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	int i;
	for(i=0; i<=n; i++){
		printf("\n%d", i);
	}
}
