#ifndef ___IntStack
#define ___IntStack

typedef struct
{
	int max;
	int ptr;
	int* stk;
} IntStack;

int Initialize(IntStack* s, int max);

int Push(IntStack* s, int x);

int Pop(IntStack* s, int x);

int peek(const IntStack* s, int* x);

int Peek(const IntStack* s, int* x);

void Clear(IntStack* s);

int Capacity(const IntStack* s);

int Size(const IntStack* s);

int IsEmpty(const IntStack* s);

int IsFull(const IntStack* s);

int search(const IntStack* s, int x);

void print(const IntStack* s);

void Terminate(IntStack* s);
#endif
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	if((s->stk = calloc(max,sizeof(int))) == NULL)
		{
			s->max = 0;
			return -1;
		}
		s->max = max;
			return 0;
}
