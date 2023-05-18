#include <stdio.h>
#include <stdlib.h>
void swap(int *i, int *j)
{
	int t = *i;
	*i = *j;
	*j = t;
}
void selection (int a[],int n)
{

	int min_index = 0;
	int i =0;
	for(i = 0; i < n - 1; i++)
	{
		int min = a[i];
		for(int j = i; j < n; j++){
			if(min > a[j]){
				min = a[j];
				min_index = j;
			
			}
		}
		swap(&a[i],&a[min_index]);
	}
}

int main()
{
	int nx;

	puts("��������");
	printf("��� ����: ");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx, sizeof(int));

	for(int i = 0; i < nx; i++){
		printf("x[%d]:",i);
		scanf("%d", &x[i]);
	}

	selection(x, nx);

	puts("������������ �����߽��ϴ�.");
	for(int i = 0; i < nx; i++)
	printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}
