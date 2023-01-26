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