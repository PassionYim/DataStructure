/*#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct TmpNode
{
	ElementType Data;								// ������
	struct TmpNode* PrevNode;						// ���� ���
	struct TmpNode* NextNode;						// ���� ���
}Node;

Node* DLL_CreateNode(ElementType NewData)			//��� ����
{
	Node* NewNode = (Node*)malloc(sizeof(Node));	// �����޸� �Ҵ�
	NewNode->Data = NewData;						// ������ ����
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;						// ���� ��忡 ���� �����ʹ� Null�� �ʱ�ȭ

	return NewNode;
}
void DLL_DestroyNode(Node* Node)
{
	free(Node);
}
void DLL_AppendNode(Node** Head, Node* NewNode)
{
	if ((*Head) == NULL)							// Head ��尡 Null�̶�� ���ο� ��尡 Head ��尡 ��.
	{
		*Head = NewNode;
	}
	else
	{												// Tail ��带 ã�� NewNode�� ����.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
		NewNode->PrevNode = Tail;					// ������ ���� ��带 ���ο� ������ PrevNode�� ����.
	}
}
Node* DLL_GetNodeIdx(Node* Head, int Location)
{
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0)	// index - 1 ���ĺ��� ��ġ ã��.
	{
		Current = Current->NextNode;
	}
	return Current;
}
void DLL_RemoveNode(Node** Head, Node* Remove)
{
	if (*Head == Remove)
	{
		*Head = Remove->NextNode;
		if ((*Head) != NULL)
		{
			(*Head)->PrevNode = NULL;
		}
		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
	else
	{
		Node* Temp = Remove;
		if (Remove->PrevNode != NULL)
		{
			Remove->PrevNode->NextNode = Temp->NextNode;
		}
		if (Remove->NextNode != NULL)
		{
			Remove->NextNode->PrevNode = Temp->PrevNode;
		}
		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
}
void DLL_InsertAfter(Node* Current, Node* NewNode)
{
	NewNode->NextNode = Current->NextNode;
	NewNode->PrevNode = Current;

	if (Current->NextNode != NULL)
	{
		Current->NextNode->PrevNode = NewNode;
		Current->NextNode = NewNode;
	}
}
int DLL_GetNodeCount(Node* Head)
{
	int Count = 0;
	Node* Current = Head;
	while (Current != NULL)
	{
		Current = Current->NextNode;
		Count++;
	}
	return Count;
}
int main()
{
	int Count;
	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;

	DLL_AppendNode(&List, DLL_CreateNode(1));
	DLL_AppendNode(&List, DLL_CreateNode(2));
	DLL_AppendNode(&List, DLL_CreateNode(3));
	DLL_AppendNode(&List, DLL_CreateNode(5));
	DLL_AppendNode(&List, DLL_CreateNode(6));
	// print Linked List
	Count = DLL_GetNodeCount(List);
	for (int i = 0; i < Count; i++)
	{
		Current = DLL_GetNodeIdx(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	printf("\nInserting 4 After [3]...\n\n");

	Current = DLL_GetNodeIdx(List, 2);
	NewNode = DLL_CreateNode(4);
	DLL_InsertAfter(Current, NewNode);
	// Print Linked List
	Count = DLL_GetNodeCount(List);
	for (int i = 0; i < Count; i++)
	{
		Current = DLL_GetNodeIdx(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	printf("\nInserting 4 After [3]...\n\n");

	printf("\nDestroying List...\n");
	DLL_DestroyNode(List);

	return 0;
}*/