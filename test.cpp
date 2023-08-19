#include<stdio.h>
int main()
{
	int a[2] = {0,};
	int f = 0;
	scanf("%d",a[1]);
	scanf("%d",a[2]);
	for(int i = 0;)
	f = a[1]%10 + a[2]%10;
	a[1] = a[1] - a[1]%10;
	a[2] = a[2] - a[2]%10;
}
