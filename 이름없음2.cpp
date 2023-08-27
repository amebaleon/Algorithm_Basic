#include <stdio.h>
#include <stdlib.h>
typedef struct nameandpoint {
	int *p[50];
	char *n[50][100];
};

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void charswap(char *a,char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int x[],int nx,char n[])
{
	for(int i = 0; i < nx; i++)
	{
		for(int j = nx -1;j > i;j--)
		{
			if(x[j] > x[j - 1])
			{
				swap(&x[j],&x[j - 1]);
				charswap(&n[j],&n[j]);
			}
		}
	}
}

int main()
{
	int nx;
	scanf("%d",&nx);
	nameandpoint x[50];
	for(int i = 0;i < nx;i++)
	{
		scanf("%d %s",x[i].p,x[i].n);
	}
	bubble(x[].p,nx,x[].n);
	printf("%s",x[3].n);
	
}
