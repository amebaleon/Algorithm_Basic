#include <stdio.h>
#include<stdlib.h>

void insertion(int a[], int n)
{
	for(int i = 1; i < n; i++){
		int tmp = a[i];
		int j;
		for(j = i; j > 0 && a[j - 1] < tmp; j--)
		a[j] = a[j - 1];
		a[j] = tmp;
	}
}

int main()
{
	int nx;
	puts("�ܼ� ����  ����");
	printf("��� ����: ");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx,sizeof(int));
	
	for(int i = 0;  i < nx; i++)
	{
		printf("x[%d]: ",i);
		scanf("%d", &x[i]);
	 } 
	 
	 insertion(x, nx);
	 
	 puts("������������ ���� �߽��ϴ�.");
	 for(int i = 0; i < nx; i++)
	 printf("x[%d] = %d\n", i,x[i]);
	 
	 free(x);
	 
	 return 0;
}