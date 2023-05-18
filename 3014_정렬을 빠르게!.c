#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nx;
	scanf("%d", &nx);
	int x[4500000]; 
	int c[100000] = {0,};
	int f[4500000]; 
	int o[100000];
	for(int i = 0; i < nx; i++){
		scanf("%d", &x[i]);
			c[x[i]]++;
	}
	o[0] = c[0];
	for(int j = 1; j < 100000; j++){
		o[j] = c[j]+o[j - 1];
	}
	for(int j = nx; j >= 0;j--){
		f[o[x[j]]] = x[j];
		o[x[j]]--;
	}
	for(int i = 0; i < nx; i++){
		printf("%d ",f[i + 1]);
	}
	
	return 0;
}
