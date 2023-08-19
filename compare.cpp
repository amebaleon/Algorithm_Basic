#include <stdio.h>
int check(int target,int arr2[],int b)
{
	for(int j = 0;j < b;j++)
	{
		if(target == arr2[j])
		{
			return 1;
		}
	}
	return 0;	
}
int compare(int a,int b)
{
	if(a < b)
	{
		return b;
	}
	if(a >= b)
	{
		return a;
	}
}
int main()
{
	int a;
	int b;
	int arr1[100000] = {0, };
	int arr2[100000] = {0, };
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i = 0;i < a;i++)
	{
		scanf("%d",arr1[i]);
	}
	for(int i = 0;i < b;i++)
	{
		scanf("%d",arr2[i]);
	}
	for(int i = 0;i < comepare(a,b);i++)
	{
		if(a < b)
		{
			printf("%d",check(arr1[i],arr2,b));
		}
		else(a >= b)
		{
			printf("%d",check(arr1[i],arr2,a));
		}	
	}
}
