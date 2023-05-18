#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
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
	puts("퀵정 렬");
	printf("요소 개수:");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx, sizeof(int));
	for(int i = 0; i < nx; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	quick(x, 0, nx -1);
	puts("오름차순으로 정렬했습니다.");
	for(int i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);
	
	return 0;
}
