#include <stdio.h>
int count = 0;
void move(int no, int x,int y)
{
	if(no > 1)
	move(no - 1, x, 6 - x - y);
	
	printf("����[%d]��(��)%d ��տ��� %d������� �ű�\n", no, x, y);
	count++;
 if(no >1)
	move(no - 1,6 - x - y, y);
}

int main()
{
	int n;
	printf("�ϳ����� ž\n���� ����: ");
	scanf("%d", &n);
	move(n, 1, 3);
	printf("�ѽ���Ƚ��: %d",count);
	
	return 0; 
}
