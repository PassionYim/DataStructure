//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct TmpNode
//{
//	char* Data;
//	struct TmpNode* NextNode;
//}Node;
//typedef struct TmpLinkedListStack
//{
//	Node* Top;
//	Node* List;
//}LinkedListStack;
//
//int LLS_IsEmpty(LinkedListStack* Stack);
//int LLS_GetSize(LinkedListStack* Stack);
//Node* LLS_Top(LinkedListStack* Stack);
//Node* LLS_Pop(LinkedListStack* Stack);
//void LLS_Push(LinkedListStack* Stack, Node* NewNode);
//void LLS_DestroyNode(Node* Node);
//Node* LLS_CreateNode(char* NewData);
//void LLS_DestroyStack(LinkedListStack* Stack);
//void LLS_CreateStack(LinkedListStack** Stack);
//
//void LLS_CreateStack(LinkedListStack** Stack)
//{
//	(*Stack) = (LinkedListStack*)malloc(sizeof(LinkedListStack));
//	(*Stack)->List = NULL;
//	(*Stack)->Top = NULL;
//}
//
//void LLS_DestroyStack(LinkedListStack* Stack)
//{
//	while (!LLS_IsEmpty(Stack))
//	{
//		Node* Popped = LLS_Pop(Stack);
//		LLS_DestroyNode(Popped);
//	}
//	free(Stack);
//}
//
//Node* LLS_CreateNode(char* NewData)
//{
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->Data = (char*)malloc(strlen(NewData) + 1);
//
//	strcpy_s(NewNode->Data, strlen(NewData)+1, NewData);
//	NewNode->NextNode = NULL;
//	return NewNode;
//}
//
//void LLS_DestroyNode(Node* Node)
//{
//	free(Node->Data);
//	free(Node);
//}
//
//void LLS_Push(LinkedListStack* Stack, Node* NewNode)
//{
//	if (Stack->List == NULL)
//	{
//		Stack->List = NewNode;
//	}
//	else
//	{
//		Stack->Top->NextNode = NewNode;
//	}
//	Stack->Top = NewNode;
//}
//Node* LLS_Pop(LinkedListStack* Stack)
//{
//	Node* TopNode = Stack->Top;
//	if (Stack->List == Stack->Top)
//	{
//		Stack->List = NULL;
//		Stack->Top = NULL;
//	}
//	else
//	{
//		Node* CurrentTop = Stack->List;
//		while (CurrentTop != NULL && CurrentTop->NextNode != Stack->Top)	//현재 탑 노드의 다음이 테일노드가 아닐때 까지
//		{
//			CurrentTop = CurrentTop->NextNode;
//		}
//		Stack->Top = CurrentTop;
//		Stack->Top->NextNode = NULL;
//	}
//	return TopNode;
//}
//Node* LLS_Top(LinkedListStack* Stack)
//{
//	return Stack->Top;
//}
//int LLS_GetSize(LinkedListStack* Stack)
//{
//	int Count = 0;
//	Node* Current = Stack->List;
//	while (Current != NULL)
//	{
//		Current = Current->NextNode;
//		Count++;
//	}
//	return Count;
//}
//int LLS_IsEmpty(LinkedListStack* Stack)
//{
//	return (Stack->List == NULL);
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	Node* Popped;
//	LinkedListStack* Stack;
//	LLS_CreateStack(&Stack);
//	LLS_Push(Stack, LLS_CreateNode("a"));
//	LLS_Push(Stack, LLS_CreateNode("b"));
//	LLS_Push(Stack, LLS_CreateNode("c"));
//	LLS_Push(Stack, LLS_CreateNode("d"));
//	LLS_Push(Stack, LLS_CreateNode("e"));
//	count = LLS_GetSize(Stack);
//	printf("Size : %d, Top :%s\n\n", count, LLS_Top(Stack)->Data);
//	for (i = 0; i < count; i++)
//	{
//		if (LLS_IsEmpty(Stack))
//		{
//			break;
//		}
//		Popped = LLS_Pop(Stack);
//		printf("Popped : %s, ", Popped->Data);
//		LLS_DestroyNode(Popped);
//		if (!LLS_IsEmpty(Stack))
//		{
//			printf("Current Top : %s\n", LLS_Top(Stack)->Data);
//		}
//		else
//		{
//			printf("Stack Is Empty.\n");
//		}
//	}
//	LLS_DestroyStack(Stack);
//	return 0;
//}