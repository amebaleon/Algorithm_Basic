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
	printf("�ǹ��� ���� %d�Դϴ�.\n",x);
	printf("�ǹ� ������ �׷�\n");
	for(int i = 0; i <= pl - 1; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
	if(pl > pr + 1)
	{
		printf("�ǹ��� ��ġ�ϴ� �׷�\n");
		for(int i = pr + 1; i <= pl - 1; i++)
		{
			printf("%d ", a[i]);
		}
		putchar('\n');
	}
	printf("�ǹ��̻��� �׷�\n");
	for(int i = pr + 1; i < n; i++)
		printf("%d ", a[i]);
		putchar('\n');
}

int main()
{
	int nx;
	puts("�迭�� �����ϴ�.");
	printf("��� ����; ");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx,sizeof(int));
	for(int i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &nx[i]);
	}
	partition(x, nx);
	free(x);
	return 0;
}
