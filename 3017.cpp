#include <stdio.h>
#include <stdlib.h>
typedef struct _student {
	int num;
	int first;
	int second;
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
			if(x[j].first > x[j - 1].first)
			{
				swap(&x[j],&x[j - 1]);
			}
			else if(x[j].first == x[j - 1].first)
			{
				if(x[j].second > x[j - 1].second)
				{
					swap(&x[j],&x[j - 1]);
				}
			}
		}
	}
}

int main()
{
	int nx;
	student x[1000];
	scanf("%d",&nx);
	for(int i = 0;i < nx;i++)
	{
		scanf("%d %d",&x[i].first,&x[i].second);
		x[i].num = i + 1;
	}
	bubble(x,nx);
	for(int j = 0; j < nx;j++)
	{
		printf("%d %d %d\n", x[j].num ,x[j].first ,x[j].second);
	}
}
