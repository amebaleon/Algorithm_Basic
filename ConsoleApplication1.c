#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int max;
	int ptr;
	char* stk;
} charStack;
int Pop(charStack* s, char* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

int Peek(const charStack* s, char* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1];
	return 0;
}
int Initialize(charStack* s, char max)
{
	s->ptr = 0;
	if ((s->stk = (char*)calloc(max, sizeof(char))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}
int Push(charStack* s, char x)
{
	if (s->ptr >= s->max)
		return -1;
	s->stk[s->ptr++] = x;
	return 0;
}
int Capacity(const charStack* s)
{
	return s->max;
}

int Size(const charStack* s)
{
	return s->ptr;
}

int IsEmpty(const charStack* s)
{
	return s->ptr <= 0;
}

int IsFull(const charStack* s)
{
	return s->ptr >= s->max;
}

int Search(const charStack* s, char x)
{
	for (int i = s->ptr - 1; i >= 0; i--)
		if (s->stk[i] == x)
			return i;
	return -1;
}

void Print(const charStack* s)
{
	int i;
	for (int i = 0; i < s->ptr; i++)
	{
		printf("%d\n", s->stk[i]);
	}
	putchar('\n');
}

void Terminate(charStack* s)
{
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}
int main()
{
	char result_arr[100] = { 0, };
	int copy = 0;
	int count = 0;
	int x = 0;
	char print[1000];
	scanf("%d", &x);

	char arr[20001] = { 0, };
	//arr == %arr[0]

	//printf("%p\n", arr);
	//printf("%p", &arr[0]);

	charStack s;
	charStack result_stack;
	Initialize(&s, 20001);
	Initialize(&result_stack, 20001);

	// initialize
	// push
	// pop 

	scanf("%s", arr);

	for (int i = 0; i < x; i++) {
		//printf("%c", arr[i]);
		Push(&s, arr[i]);
	}


	// '3' - '0'  => 3
	// 51 - 48 => 3
	// '0' -> 48
	// '3' -> 51
	// '0' '1' '2' '3'


	char result;
	int pop_count = 0;
	while (!IsEmpty(&s)) {
		Pop(&s, &result);
		Push(&result_stack, result);
		pop_count++;

		if (pop_count == 3) {
			Push(&result_stack, ',');
			pop_count = 0;
		}
		
		//printf("%c", result);
	}

	while (!IsEmpty(&result_stack)) {
		Pop(&result_stack, &result);
		printf("%c", result);
	}


}