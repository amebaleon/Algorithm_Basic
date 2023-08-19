#include <stdio.h>
#include <stdlib.h>
void swap(int *n,int *j)
{
	int *t;
	*t = *n;
	*n = *j;
	*j = *t;
}
void bubble(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = n - 1;j > i; j--){
			if(a[j - 1] > a[j]){
				swap(int, a[j - 1],a[j]);
			}
		}
	}
}

int main()
{
	int nx;
	
	puts("��������");
	printf("��� ����: ");
	scanf("%d", &nx);
	int *x = (int*)calloc(nx, sizeof(int));
	
	for(int i = 0; i < nx; i++){
		printf("x[%d]:",i);
		scanf("%d", &x[i]);
	}
	
	bubble(x, nx);
	
	puts("������������ �����߽��ϴ�.");
	for(int i = 0; i < nx; i++)
	printf("x[%d] = %d\n", i, x[i]);
	
	free(x);
	
	return 0;
}
