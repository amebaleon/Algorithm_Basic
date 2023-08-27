#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int a[])
{
	for(int i = 0; i < 3; i++)
{
	for(int j = 3; j > i;j--)
	{
	if(a[j - 1] > a[j])
	{
		swap(a[j - 1],a[j]);
	}
	
}
}
for(int i  = 0; i < 3; i++)
	printf("%d",a[i]);
}
int main()
{
	int x = {0,}
	for(int i = 0;i < 3;i++)
	{
		scanf("%d",x[i]);
	}
	bubble(x);
}

