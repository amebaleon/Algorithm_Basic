#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
	return;
}

void selection(int a[], int n)
{
	nx = 2;
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}

int main()
{
	int nx;
	printf("배열 길이를 입력해주세요 : ");
	scanf("%d", &nx);

	int* x = (int*)calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	selection(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	//free(x);
}