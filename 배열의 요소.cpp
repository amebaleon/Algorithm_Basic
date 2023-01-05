#include <stdio.h>
#define N 5
int main()
{
	int a[N];
	for(int i = 0; i < N; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d",&a[i]);
	}
	puts("각 요소의 값");
	for(int i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	return 0;
}
