#include <stdio.h>
#include <stdlib.h>
typedef struct _student {
	int p;
	char n[50];
}student;

void swap(student *a,student *b)
{
	student tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(student x[],int nx)
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
		scanf("%s %d",&x[i].n,&x[i].p);
			}
	bubble(x,nx);
	printf("%s",x[2].n);
}
