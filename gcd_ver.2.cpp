#include <stdio.h>

int main()
{
	int x;
	int y;
	int n;
	printf("정수를 입력하세요.");
	scanf("%d %d",&x,&y);
	for(int i = 0;y > 0;i++)
	{
		n = x;
		x = y;
		y = n % y;
		if(y == 0)
		{
			printf("최대공약수는 %d입니다.\n",x);
			return 0; 
		}

	}
	return 0;
}
