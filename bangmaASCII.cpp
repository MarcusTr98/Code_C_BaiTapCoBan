#include <stdio.h>
int main()
// bang chu cai Aphabel voi bang ma ASCII
{
	char kytu;
	for (kytu=65; kytu<=90; kytu++){
		printf("%c ", kytu);
		printf("%d - %c\n",kytu,kytu);
	}
}
