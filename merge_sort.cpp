#include <stdio.h>
#include <stdlib.h>

void merge (const int a[], int na, const int b[],int nb,int c[])
{
	int pa = 0;
	int pb = 0;
	int pc = 0;
	while(pa <na && pb < nb)
	{
		c[pc++] = (a[pa] <= b[pb]) ? a[pa++]: b[pb++];
	}
	while(pa < na)
	{
	c[pc++] = a[pa++];
	}
	while(pb < nb)
	c[pc++] = b[pb++];
}

int main()
{
	int na,nb;
	printf("a�� ��� ����: "); scanf("%d", &na);
	printf("b�� ��� ����: "); scanf("%d", &nb);
	
	int *a = (int *)calloc(na, sizeof(int));
	int *b = (int *)calloc(nb, sizeof(int));
	int *c = (int *)calloc(na + nb, sizeof(int));
		
	for(int i = 0; i < na; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	
	}

	for(int i = 0; i < nb; i++)
	{
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);
	
	}
		
	merge(a, na, b, nb, c);
	puts("�迭 a�� b�� �����Ͽ� �迭 c�� �����߽��ϴ�.");
	for(int i = 0; i < na + nb; i++)
	{
		printf("c[%2d] = %2d\n", i, c[i]);
}
		free(a);
		free(b);
		free(c);
		
		return 0;
}
