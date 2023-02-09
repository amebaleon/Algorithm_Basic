#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	do{
		int pc = (pl = pr) / 2;
		if(a[pc] == key)
		return pc;
		else if(a[pc] < key)
		pl = pc +1;
		else
		pr = pc -1;
	}while(pl <= pr);
	return -1;
}

int main ()
{
	int nx,ky;
	
	puts("���� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	int *x = (int*)calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0]: ");
	scanf("%d",&x[0]);
	for(int i = 1; i < nx; i++)
	{
		do{
			int i = ntf("x[%d]: ",i);
			scanf("%d",&x[i]);
		}while(x[i] < x[i - 1]);
	}
	printf("�˻���");
	scanf("%d", &ky);
	int idx = bin_search(x,nx,ky);
	if(idx == -1)
	puts("�˻��� �����߽��ϴ�.");
	else
	printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n",ky, idx);
	free(x);
	
	return 0;
}