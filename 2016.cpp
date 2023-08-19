#include <stdio.h>
#include <stdlib.h>
#include "IntStack"
int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

int Peek(const IntStack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1];
	return 0;
}
int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	if ((s->stk = (int *)calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}
int Push(IntStack* s, int x)
{
	if (s->ptr >= s->max)
		return -1;
	s->stk[s->ptr++] = x;
	return 0;
}
int Capacity(const IntStack* s)
{
	return s->max;
}

int Size(const IntStack* s)
{
	return s->ptr;
}

int IsEmpty(const IntStack* s)
{
	return s->ptr <= 0;
}

int IsFull(const IntStack* s)
{
	return s->ptr >= s->max;
}

int Search(const IntStack* s, int x)
{
	for (int i = s->ptr - 1; i >= 0; i--)
		if (s->stk[i] == x)
			return i;
	return -1;
}

void Print(const IntStack* s)
{
	int i;
	for (int i = 0; i < s->ptr; i++)
	{
		printf("%d\n", s->stk[i]);
	}
	putchar('\n');
}

void Terminate(IntStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}
int main()
{
	int count = 0;
	int x = 0;
	char print[1000];
	scanf("%d",&x);
	char *arr = (char *)calloc(x,sizeof(char));
	IntStack s;
	scanf("%s", arr);
	push(&s, arr);
	while(1)
	{
		print[x+x-1] = Pop(&s,arr);
		x -= 1;
		if(x == 2)
		{
			break;
		}
		print[x + x - 1] = Pop(&s,arr);
		x -= 1;
		if(x == 2)
		{
			break;
		}
		print[x + x - 1] = Pop(&s,arr);
		x -= 1;
		if(x == 2)
		{
			break;
		}
		print[x + x - 1] = ",";
	}
	
	
}
