#include <stdio.h>
#include <stdlib.h>

int search(const int a[],int n,int key)
{
	int i = 0;
	while(1)
	{
		if(i == n)
		return -1;
		if(a[i] == key)
		return i;
		i++;
	}
}

int main ()
{
	int nx,ky;
	puts("���� �˻�");
	printf("��� ����:");
	scanf("%d",&nx);
	int *x = (int*)calloc(nx,sizeof(int));
	for(int i = 0; i < nx; i++)
	{
		printf("x[%d]:",i);
		scanf("%d",&x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	int idx = search(x, nx,ky);
	if(idx == -1)
	puts("�˻��� �����߽��ϴ�.");
	else
	printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n",ky,idx);
	free(x);
	
	return 0;
}
