#include <stdio.h>
#include <stdlib.h>
int count = 0;
int min = 0;
int min_index = 0;
int f = 999999;
void swap(int *i, int *j)
{
	int t = *i;
	*i = *j;
	*j = t;
}
void arr_print(int arr[],int n)
{
	int j;
	count++;
	printf("\n");
	for(j = 0;j < count;j++)
	{
	printf(" ");
	}
	printf("*");
	for(int h = 0;h < n; h++)
	{
		if(f>arr[h]){
		f = arr[h];
		}
	}
	for(int h = 0;h < n; h++)
	{
		if(arr[h] == f){
		f = h;
		break;
		}
	}
	for(int g = 0;g < f;g++)
	{
		printf(" ");
	}
	printf("+");
	printf("\n");
	for(int i = 0;i < n; i++)
	{
		printf("%d",arr[i]);
	}

}
void selection (int a[],int n)
{
	int j;
	
	int i =0;
	for(i = 0; i < n - 1; i++)
	{
		min = a[i];
		for( j = i; j < n; j++){
							
			if(min > a[j]){
				min = a[j];
				min_index = j;
				

			}
		}
		swap(&a[i],&a[min_index]);
		arr_print(a,n);
	
	}
}

int main()
{
	int nx;

	puts("선택정렬");
	printf("요소 개수: ");
	scanf("%d", &nx);
	int *x = (int *)calloc(nx, sizeof(int));

	for(int i = 0; i < nx; i++){
		printf("x[%d]:",i);
		scanf("%d", &x[i]);
	}

	selection(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for(int i = 0; i < nx; i++)
	printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}
