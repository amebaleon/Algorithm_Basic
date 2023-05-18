#include <stdio.h>
#include <stdlib.h>
void swap(int *n,int *j)
{
	int tmp = *n;
	*n = *j;
	*j = tmp;
}
void bubble(int a[])
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 2;j > i; j--){
			if(a[j - 1] > a[j]){
				swap(&a[j - 1],&a[j]);
			}
		}
	}
}

int main()
{
	int three = 3;
	int *x = (int*)calloc(three, sizeof(int));
	
	for(int i = 0; i < 3; i++){
		scanf("%d",&x[i]);
	}
	bubble(x);
	for(int i = 0; i < 3; i++)
	{
	printf("%d\n", x[i]);
}
	return 0;
}
