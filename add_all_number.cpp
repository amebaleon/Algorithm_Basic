#include <stdio.h>

int main (void)
{
	int n;
	puts("1부터 n까지의 총합을 구합니다.");
	printf("n값: ");
	scanf("%d",&n);
	int sum = 0;
	in i = 1;
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 총합은%d입니다.\n", n, sum);
	
	return 0;
}
