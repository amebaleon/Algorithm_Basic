#include <stdio.h>
#include <stdlib.h>
typedef struct student {
	int p;
	char n[50];
};

void swap(int float *a,int float *b)
{
	int float tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int x[],int nx)
{
	for(int i = 0; i < nx; i++)
	{
		for(int j = nx -1;j > i;j--)
		{
			if(x[j].p > x[j - 1].p)
			{
				swap(&x[j],&x[j - 1]);
			}
		}
	}
}

int main()
{
	int nx;
	student x[50];
	scanf("%d",&nx);
	for(int i = 0;i < nx;i++)
	{
		scanf("%d %s",x[i].p,x[i].n);
	}
	bubble(x,nx);
	printf("%s",x[2].n);
}
