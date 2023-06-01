#include <stdio.h>
int main()
{
	int nx = 0;
	scanf("%d",&nx);
	int x[10000] = {0, };
	for(int i = 0;i < nx;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i = nx - 1;i > -1;i--)
	{
		printf("%d ",x[i]);
	}
}
