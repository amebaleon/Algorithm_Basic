#include <stdio.h>
int count = 0;
void move(int no, int x,int y)
{
	if(no > 1)
	move(no - 1, x, 6 - x - y);
	
	printf("원반[%d]를(을)%d 기둥에서 %d기둥으로 옮김\n", no, x, y);
	count++;
 if(no >1)
	move(no - 1,6 - x - y, y);
}

int main()
{
	int n;
	printf("하노이의 탑\n원반 개수: ");
	scanf("%d", &n);
	move(n, 1, 3);
	printf("총실행횟수: %d",count);
	
	return 0; 
}
