#include <stdio.h>
#include <stdlib.h>
int cmp(const int *a,const int *b)
{
	if(*a < *b)
	return -1;
	else if(*a > *b)
	return 1;
	else
	return 0;
}

int main()
{
	int a;
	int b;
	scanf("%d", &a);
	int *arr1 = (int *)calloc(a, sizeof(int));
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr1[i]);
	}

	scanf("%d", &b);
	int *arr2 = (int *)calloc(b, sizeof(int));
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &arr2[i]);
	}
	qsort(arr1,a,sizeof(int),(int(*)(const void *,const void *))cmp);
	
	//int *tmp_p = bsearch(&arr1[0],arr2,b,sizeof(int),(int(*)(const void *)) cmp);

//	if(tmp_p == NULL){
//		printf("0 ");
//	}
//	else{
///		printf("1 ");
//	}
	
	for (int i = 0; i < b; i++)
	{
		int *tmp_p = bsearch(&arr2[i],arr1,a,sizeof(int),(int(*)(const void *)) cmp);
	
		if(tmp_p == NULL){
			printf("0 ");
		}
		else{
			printf("1 ");
		}
	}
}
