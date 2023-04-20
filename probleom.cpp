#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(char *a,char *b)
{
	if(strcmp(a,b) == -1)
	{
		return -1;
	}
	else if(strcmp(a,b) == 1)
	{
		return 1;
	}
	else if(strcmp(a,b) == 0)
	{
		return 0;
	}
}
void print(char a[])
{
	for(int i = 0;i < 4;i++)
	{
		printf("%s",a[i]);
	}
}
int main()
{
	char a[][7] = {"LISP", "C", "Ada", "Pascal"};
	char *p[] = {"LISP", "C", "Ada", "Pascal"};


	qsort(a,4,7,(int(*)(const void *,const void *))compare);	
	qsort(p,4,7,(int(*)(const void *,const void *))compare);

	for(int i = 0;i < 4;i++)
	{
		printf("%s\n",a[i]);
	}

	for(int i = 0;i < 4;i++)
	{
		printf("%s\n",p[i]);
	}
	
	return 0;
}
