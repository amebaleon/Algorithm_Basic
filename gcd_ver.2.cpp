#include <stdio.h>

int main()
{
	int x;
	int y;
	int n;
	printf("������ �Է��ϼ���.");
	scanf("%d %d",&x,&y);
	for(int i = 0;y > 0;i++)
	{
		n = x;
		x = y;
		y = n % y;
		if(y == 0)
		{
			printf("�ִ������� %d�Դϴ�.\n",x);
			return 0; 
		}

	}
	return 0;
}
