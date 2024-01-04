/*#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct TmpNode
{
	ElementType Data;
}Node;
typedef struct TmpArrayStack
{
	int Capacity;
	int Top;
	Node* Nodes;
}ArrayStack;

void AS_CreateStack(ArrayStack** Stack, int Capacity)
{
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));
	(*Stack)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);
	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = -1;
}
void AS_DestroyStack(ArrayStack* Stack)
{
	free(Stack->Nodes);
	free(Stack);
}
void AS_Push(ArrayStack* Stack, ElementType Data)
{
	Stack->Top++;
	Stack->Nodes[Stack->Top].Data = Data;
}
ElementType AS_Pop(ArrayStack* Stack)
{
	int Position = Stack->Top--;
	return Stack->Nodes[Position].Data;
}
ElementType AS_Top(ArrayStack* Stack)
{
	return Stack->Nodes[Stack->Top].Data;
}
int AS_GetSize(ArrayStack* Stack)
{
	return Stack->Top + 1;
}
int AS_IsEmpty(ArrayStack* Stack)
{
	return (Stack->Top == -1);
}
int AS_IsFull(ArrayStack* Stack)
{
	return (Stack->Top == (Stack->Capacity - 1));
}
int main()
{
	int i = 0;
	int capa = 5;
	ArrayStack* Stack = NULL;
	
	AS_CreateStack(&Stack, capa);
	for (i = 0; i < capa+1; i++)
	{
		if (AS_IsFull(Stack))
		{
			printf("Stack is Full. You don't stack data.\n");
			break;
		}
		AS_Push(Stack, i);
		printf("Stacked : %d\n", i);
	}
	printf("\n");
	printf("Capacity : %d, Size : %d, Top : %d\n", Stack->Capacity, AS_GetSize(Stack), AS_Top(Stack));
	printf("\n");
	for (i = 0; i < capa; i++)
	{
		if (AS_IsEmpty(Stack))
		{
			break;
		}
		printf("Popped : %d, ", AS_Pop(Stack));
		if (!AS_IsEmpty(Stack))
		{
			printf("Current Top : %d\n", AS_Top(Stack));
		}
		else
		{
			printf("Stack is Empty.\n");
		}
	}
	AS_DestroyStack(Stack);

	return 0;

}*/