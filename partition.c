#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void partition(int a[],int n)
{
	int pl = 0;
	int pr = n - 1;
	int x = a[n/2];
	do{
		while(a[pl] <x)
		{ 
			pl++;
		}
		while(a[pr] > x) 
		{
			pr--;
		}
		if(pl <= pr)
		{
			swap(&a[pl],&a[pr]);
			pl++;
			pr--;
		}
	}while(pl <= pr);
	printf("피벗의 값은 %d입니다.\n",x);
	printf("피벗 이하의 그룹\n");
	for(int i = 0; i <= pl - 1; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
	if(pl > pr + 1)
	{
		printf("피벗과 일치하는 그룹\n");
		for(int i = pr + 1; i <= pl - 1; i++)
		{
			printf("%d ", a[i]);
		}
		putchar('\n');
	}
	printf("피벗이상의 그룹\n");
	for(int i = pr + 1; i < n; i++)
		printf("%d ", a[i]);
		putchar('\n');
}

int main()
{
	int nx;
	puts("배열을 나눕니다.");
	printf("요소 개수; ");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx,sizeof(int));
	for(int i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	partition(x, nx);
	free(x);
	return 0;
}
