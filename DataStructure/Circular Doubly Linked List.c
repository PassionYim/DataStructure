/*
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct TmpNode
{
	ElementType Data;								// ������
	struct TmpNode* PrevNode;						// ���� ���
	struct TmpNode* NextNode;						// ���� ���
}Node;

Node* CDLL_CreateNode(ElementType NewData)			//��� ����
{
	Node* NewNode = (Node*)malloc(sizeof(Node));	// �����޸� �Ҵ�
	NewNode->Data = NewData;						// ������ ����
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;						// ���� ��忡 ���� �����ʹ� Null�� �ʱ�ȭ

	return NewNode;
}
void CDLL_DestroyNode(Node* Node)
{
	free(Node);
}
void CDLL_AppendNode(Node** Head, Node* NewNode)
{
	if ((*Head) == NULL)							// Head ��尡 Null�̶�� ���ο� ��尡 Head ��尡 ��.
	{
		*Head = NewNode;
		(*Head)->NextNode = *Head;
		(*Head)->PrevNode = *Head;
	}
	else
	{												// Tail ��带 ã�� NewNode�� ����.
		Node* Tail = (*Head)->PrevNode;
		Tail->NextNode->PrevNode = NewNode;
		Tail->NextNode = NewNode;
		NewNode->PrevNode = Tail;					// ���ο� ����� PrevNode�� ���� ���� ���
		NewNode->NextNode = (*Head);
	}
}
Node* CDLL_GetNodeIdx(Node* Head, int Location)
{
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0)	// index - 1 ���ĺ��� ��ġ ã��.
	{
		Current = Current->NextNode;
	}
	return Current;
}
void CDLL_RemoveNode(Node** Head, Node* Remove)
{
	if (*Head == Remove)
	{
		(*Head)->PrevNode->NextNode = Remove->NextNode;
		(*Head)->NextNode->PrevNode = Remove->PrevNode;

		(*Head) = Remove->NextNode;
		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
	else
	{
		Remove->NextNode->PrevNode = Remove->PrevNode;
		Remove->PrevNode->NextNode = Remove->NextNode;

		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
}
void CDLL_InsertAfter(Node* Current, Node* NewNode)
{
	NewNode->NextNode = Current->NextNode;
	NewNode->PrevNode = Current;

	if (Current->NextNode != NULL)
	{
		Current->NextNode->PrevNode = NewNode;
		Current->NextNode = NewNode;
	}
}
int CDLL_GetNodeCount(Node* Head)
{
	int Count = 0;
	Node* Current = Head;
	while (Current != NULL)
	{
		Current = Current->NextNode;
		Count++;
		if (Current == Head)
		{
			break;
		}
	}
	return Count;
}
int main()
{
	int Count;
	Node* List = NULL;
	Node* Current = NULL;
	Node* NewNode = NULL;

	CDLL_AppendNode(&List, CDLL_CreateNode(1));
	CDLL_AppendNode(&List, CDLL_CreateNode(2));
	CDLL_AppendNode(&List, CDLL_CreateNode(3));
	CDLL_AppendNode(&List, CDLL_CreateNode(5));
	CDLL_AppendNode(&List, CDLL_CreateNode(6));
	// print Linked List
	Count = CDLL_GetNodeCount(List);
	for (int i = 0; i < Count; i++)
	{
		Current = CDLL_GetNodeIdx(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	printf("\nInserting 4 After [3]...\n\n");

	Current = CDLL_GetNodeIdx(List, 2);
	NewNode = CDLL_CreateNode(4);
	CDLL_InsertAfter(Current, NewNode);
	// Print Linked List
	Count = CDLL_GetNodeCount(List);
	for (int i = 0; i < Count; i++)
	{
		Current = CDLL_GetNodeIdx(List, i);
		printf("List[%d] : %d\n", i, Current->Data);
	}
	printf("\nInserting 4 After [3]...\n\n");

	printf("\nDestroying List...\n");
	CDLL_DestroyNode(List);

	return 0;
}*/