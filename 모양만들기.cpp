#include <stdio.h>
#include <windows.h>
void square(int a,int b)
{
	for(int i = 0;i < a;i++)
	{
		for(int j = 0;j < b;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int x;
	int a;
	int b;
	while(1)
	{
	printf("����� ���� ����� ���ÿ�.\n(1)�簢��");
	scanf("%d",x);
	if(x == 1)
	{
		printf("���μ����Է�");
		scanf("%d %d",&a,&b);
		square(a,b);
	}
	else
	{
		printf("����");
	}
}
}
