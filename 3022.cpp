#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int max;
	int ptr;
	char *stk;
} IntStack;


int Pop(IntStack* s, char* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

int Peek(const IntStack* s, char* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1];
	return 0;
}
int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	if ((s->stk = (char *)calloc(max, sizeof(char))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}
int Push(IntStack* s, char x)
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

int Search(const IntStack* s, char x)
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
	int mi = 0;
	char a;
	char b;
	int i = 0;
	char num1[1000] = {0, };
	char num2[1000] = {0, };
	char result[1000] = {0, };
	int print[1000] = {0, };
	IntStack num1stack;
	IntStack num2stack;
	Initialize(&num1stack,1000);
	Initialize(&num2stack,1000);
	
	scanf("%s", num1);
	scanf("%s", num2);
	
	while(num1[i] != '\0')
	{
		Push(&num1stack,num1[i]);
		i++;
	}
	i = 0;
	while(num2[i] != '\0')
	{
		Push(&num2stack,num2[i]);
		i++;
	}
	
	i = 0;
	
	while(!IsEmpty(&num1stack) && !IsEmpty(&num2stack))
	{
		Pop(&num1stack,&a);
		Pop(&num2stack,&b);
		if(a > b)
		{
			result[i] = a - b;
		}
		else
		{
			result[i] = b - a;
		}
		i++;
	}
	for(int o = 0;o < 101;o++)
	{
		for(int k = 0;k < i;k++)
		{
			if(result[k] < 0)
			{
				result[k] += 10;
				result[k + 1] -= 1;
			}
		}
	}
	if(result[i + 1] < 0)
	{
		mi = 1;
	}
	if(mi == 0)
	{
		for(;i > 0;i--)
		{
			printf("%d",result[i]);
		}
	}
	else
	{
		printf("-");
		for(;i > 0;i--)
		{
			printf("%d",result[i + 100]);
		}
	}
	//결과값이 0보다 작으면 -1 곱하기
	
} 
/*pop(&num1stack,a)
		pop(&num2stack,b)
		if(result[i] == -1)
		result[i] = 9;
		result[i + 1] -= 1;
		if(a >= b)
		{
			result[i] = a - b;
		}
		else
		{
			if(result[i + 1] =='0')
			{
				result[i + 1] = '-';
				result[i] = a + 10 - b;
				lowering_math = 1;
			}
			else if(result[i + 1] == -1)
			{
				if(result[i + 2] != '0')
				result[i + 2] -= 1;
				else
				{
					result[i + 2] = '-';
					result[i + 1] = a + 10 - b;
					lowering_math = 1;	
				}
			}
			//result[i + 1] = result[i + 1] - 1;
			//result[i] = a + 10 - b;
		}
		*/
