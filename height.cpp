#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[],int n)
{
int max = a[0];
for(int i = 1;i < n; i++)
if(a[i] > max) max = a[i];
return max;
}
int main()
{
	int namber;
	printf("사람수 : ");
	scanf("%d",&number);
	int *height = calloc(number, sezeof(int));
	printf("%d명의 키를 입력하세요\n",number);
	for(int i = 0;i < number; i++)
	{
		]printf("heihgt[%d]: ", i);
		scanf("%d",&heihgt[i]);
	}
	printf("최댓값은 %d입니다.\n",maxof(heihgt, number));
	free(heihgt);
	
	return 0;
	}
