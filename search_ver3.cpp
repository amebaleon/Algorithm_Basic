#include <stdio.h>
#include <stdlib.h>
char arr_tmp[9];

int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	
	do{		
		//1
		int pc = (pl + pr) / 2;
	
		//2
		for(int i = 0;i < n;i++)
		{
			arr_tmp[i] = ' ';
		}

		arr_tmp[pl] = '<';
		arr_tmp[pc] = '+';
		arr_tmp[pr] = '>';

		for(int i = 0;i < n; i++)
		{
			printf("%-2c",arr_tmp[i]);
		}
		printf("\n");
		for(int i = 0;i < n;i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
		if(a[pc] == key)
			//4
			return pc;
			
		//3
		
		else if(a[pc] < key)
			pl = pc +1;
			//5
		
		//6
		
		else
			//7
			pr = pc -1;
		
		//8
	
	}while(pl <= pr);
		
	return -1;
}

int main ()
{
	int nx,ky;
	int pl = 0;
	int pc = 0;
	puts("���� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	int pr = nx - 1;
	char arr_tmp[nx];
	int *x = (int*)calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0]: ");
	scanf("%d",&x[0]);
	for(int i = 1; i < nx; i++)
	{
		do{
			printf( "x[%d]: ", i);
			scanf("%d",&x[i]);
		}while(x[i] < x[i - 1]);
	}
	printf("�˻���");
	scanf("%d", &ky);
	int idx = bin_search(x,nx,ky);
	pc = idx;
	if(idx == -1)
	puts("�˻��� �����߽��ϴ�.");
	else

	
	printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n",ky, idx);
	free(x);
	
	return 0;
}
 
