#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void quick (int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int x = a[(pl + pr) / 2];
	do{
		while(a[pl] < x) pl++;
		while(a[pr] > x) pr--;
		if(pl <= pr) {
			swap(&a[pl],&a[pr]);
			pl++;
			pr--;
		}
	} while(pl <= pr);
	if(left < pr) quick(a, left, pr);
	if(pl < right) quick(a, pl, right);
}
int main()
{
	int nx;
	scanf("%d",&nx);
	int x[50000] = {0, };
	int count[50000];
	int xcopy[50000];
	for(int i = 0;i < nx;i++)
	{
		scanf("%d",&x[i]);
		count[i] = i;
		xcopy[i] = x[i];
	}
	quick(x, 0, nx - 1);
	for(int i = 0;i < nx;i++)
	{
		for(int j = 0;j < nx;j++)
		{
			if(xcopy[i] == x[j])
			{
				count[i] = j;
				break;
			}
		}
	}
	for(int a = 0;a < nx;a++)
	{
		printf("%d ",count[a]);
	}
}
