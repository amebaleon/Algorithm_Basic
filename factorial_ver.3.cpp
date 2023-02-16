#include <stdio.h>


int main()
{
	int x;
	int y = 1;
	int count = 0;
	printf("정수를 입력하세요.");
	scanf("%d", &x);
	do{
		y = y * x;
		x--;
		count++;
	}while(x > 0);
	printf("%d의 순차곱셈값은 %d입니다.\n",count,y);
}
