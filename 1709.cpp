#include <stdio.h>
#include <stdlib.h>
void swap  (int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubble(int x[],int nx)
{
	for(int i = 0; i < nx;i++)
	{
		for(int j = nx + 1;j > 0;j--)
		{
			if(x[j] > x[j - 1])
			{
				swap(&x[j],&x[j - 1]);
			}
		}
	}
}
int main()
{
	int nx;
	scanf("%d",&nx);
	int x[100] = {0,};
	for(int i = 0; i < nx;i++)
	{
		scanf("%d",&x[i]);
	}
	bubble(x,nx);
	for(int i = 0;i < nx; i++)
	{
		printf("%d ",x[i]);
	}
}
