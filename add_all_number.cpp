#include <stdio.h>

int main (void)
{
	int n;
	puts("1���� n������ ������ ���մϴ�.");
	printf("n��: ");
	scanf("%d",&n);
	int sum = 0;
	in i = 1;
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ ������%d�Դϴ�.\n", n, sum);
	
	return 0;
}
