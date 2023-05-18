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
	printf("만들고 싶은 모양을 고르시오.\n(1)사각형");
	scanf("%d",x);
	if(x == 1)
	{
		printf("가로세로입력");
		scanf("%d %d",&a,&b);
		square(a,b);
	}
	else
	{
		printf("오류");
	}
}
}
