#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *x = calloc(1, sizeof(int));
	if(x == NULL)
	{
		puts("�޷θ� �Ҵ翡 �����߽��ϴ�.");
	}else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}
	return 0;
}
