#include <stdio.h>

int main()
{
	int n;
	do{
		printf("몇단삼각형 입니까?:");
		scanf("%d", &n);
	}while(n <= 0);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		putchar('*');
		putchar('\n');
	}
	return 0;
}
