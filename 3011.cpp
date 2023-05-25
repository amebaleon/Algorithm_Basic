#include <stdio.h>
#include <stdlib.h>
int count = 0;
void swap  (int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void arr_print(int x[],int nx)
{
	for(int i = 0; i < nx;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
}
int check(int x[],int nx)
{
	for(int i = 0;i < nx - 1;i++){
		if(x[i] > x[i + 1])
		return 0;
	}
	return 1;
}
void bubble(int x[],int nx)
{
	for(int i = 0; i < nx;i++)
	{
		for(int j = nx - 1;j > 0;j--)
		{
			if(x[j] < x[j - 1])
			{
				swap(&x[j],&x[j - 1]);
			}
			
		}
//		for(int j =0;j < nx-1;j++)
//		{
//			if(x[j] > x[j + 1])
//			{
//				swap(&x[j],&x[j + 1]);
//			}
//			
//		}
		
//		arr_print(x, nx);
		
		count++;
		if(check(x,nx) == 1)
		{
			return;
		}
		
	}
}
int main()
{
	int nx;
	scanf("%d",&nx);
	int *x = (int *)calloc(nx,sizeof(int));
	for(int i = 0; i < nx;i++)
	{
		scanf("%d",&x[i]);
	}
//	arr_print(x, nx);
	bubble(x,nx);
	printf("%d",count);
}
