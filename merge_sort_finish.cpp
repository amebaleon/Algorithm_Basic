#include <stdio.h>
#include <stdlib.h>


static int *buff;


static void __mergesort (int a[], int left, int right)
{
	if(left < right){
		int center =(left + right) / 2; //전체배열의 왼쪽+오른쪽에 2를 나누었으므로 평균인 중심을 구할수 있다. 
		int p = 0;
		int i;
		int j = 0;
		int k = left;
		__mergesort(a,left,center);
		__mergesort(a, center + 1, right);
		for(i = left; i <= center; i++)
		buff[p++] = a[i];
		while(i <= right && j < p)
		a[k++] =(buff[j] <= a[i]) ? buff[j++]: a[i++];
		while(j < p)
		a[k++] = buff[j++];
	}
}


int mergesort (int a[],int n)
{
	if((buff = (int *)calloc(n,sizeof(int))) == NULL)
  	return-1;
	__mergesort(a, 0, n - 1);
	free(buff);
	return 0;
}

int main()
{
	int nx;
	puts("병합 정렬");
	printf("요소 개수: ");
	scanf("%d",&nx);
	int *x = (int *)calloc(nx, sizeof(int));
	
	for (int i = 0; i < nx;i++) {
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	mergesort(x, nx);
	puts("오름차순으로 정렬했습니다.");
	for(int i = 0; i < nx; i++)
	printf("x[%d] = %d\n", i,x[i]);
	free(x);
	
	return 0;
}
