#include <stdio.h>


int main()
{
	int x;
	int y = 1;
	int count = 0;
	printf("������ �Է��ϼ���.");
	scanf("%d", &x);
	do{
		y = y * x;
		x--;
		count++;
	}while(x > 0);
	printf("%d�� ������������ %d�Դϴ�.\n",count,y);
}
