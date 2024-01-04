//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//typedef int ElementType;
//typedef struct TmpNode
//{
//	ElementType Data;								// 데이터
//	struct TmpNode* NextNode;						// 다음 노드
//}Node;
//
//Node* SLL_CreateNode(ElementType NewData)			//노드 생성
//{
//	Node* NewNode = (Node*)malloc(sizeof(Node));	// 동적메모리 할당
//	NewNode->Data = NewData;						// 데이터 저장
//	NewNode->NextNode = NULL;						// 다음 노드에 대한 포인터는 Null로 초기화
//
//	return NewNode;
//}
//void SLL_DestroyNode(Node* Node)
//{
//	free(Node);
//}
//void SLL_AppendNode(Node** Head, Node* NewNode)
//{
//	if ((*Head) == NULL)							// Head 노드가 Null이라면 새로운 노드가 Head 노드가 됨.
//	{
//		*Head = NewNode;
//	}
//	else
//	{												// Tail 노드를 찾아 NewNode를 연결.
//		Node* Tail = (*Head);
//		while (Tail->NextNode != NULL)
//		{
//			Tail = Tail->NextNode;
//		}
//		Tail->NextNode = NewNode;
//	}
//}
//Node* SLL_GetNodeIdx(Node* Head, int Location)
//{
//	Node* Current = Head;
//	while (Current != NULL && (--Location) >= 0)	// index - 1 이후부터 위치 찾기.
//	{
//		Current = Current->NextNode;
//	}
//	return Current;
//}
//void SLL_RemoveNode(Node** Head, Node* Remove)
//{
//	if (*Head == Remove)
//	{
//		*Head = Remove->NextNode;
//	}
//	else
//	{
//		Node* Current = *Head;
//		while (Current != NULL && Current->NextNode != Remove)
//		{
//			Current = Current->NextNode;
//		}
//		if (Current != NULL)
//		{
//			Current->NextNode = Remove->NextNode;	// 삭제노드의 포인터 주소를 삭제 전 노드의 주소에 삽입.
//		}
//	}
//}
//void SLL_InsertAfter(Node* Current, Node* NewNode)
//{
//	NewNode->NextNode = Current->NextNode;
//	Current->NextNode = NewNode;
//}
//int SLL_GetNodeCount(Node* Head)
//{
//	int Count = 0;
//	Node* Current = Head;
//	while (Current != NULL)
//	{
//		Current = Current->NextNode;
//		Count++;
//	}
//	return Count;
//}
//int main()
//{
//	int Count;
//	Node* List = NULL;
//	Node* Current = NULL;
//	Node* NewNode = NULL;
//
//	SLL_AppendNode(&List, SLL_CreateNode(1));
//	SLL_AppendNode(&List, SLL_CreateNode(2));
//	SLL_AppendNode(&List, SLL_CreateNode(3));
//	SLL_AppendNode(&List, SLL_CreateNode(5));
//	SLL_AppendNode(&List, SLL_CreateNode(6));
//	// print Linked List
//	Count = SLL_GetNodeCount(List);
//	for (int i = 0; i < Count; i++)
//	{
//		Current = SLL_GetNodeIdx(List, i);
//		printf("List[%d] : %d\n", i, Current->Data);
//	}
//	printf("\nInserting 4 After [3]...\n\n");
//
//	Current = SLL_GetNodeIdx(List, 2);
//	NewNode = SLL_CreateNode(4);
//	SLL_InsertAfter(Current, NewNode);
//	// Print Linked List
//	Count = SLL_GetNodeCount(List);
//	for (int i = 0; i < Count; i++)
//	{
//		Current = SLL_GetNodeIdx(List, i);
//		printf("List[%d] : %d\n", i, Current->Data);
//	}
//	printf("\nInserting 4 After [3]...\n\n");
//	
//	printf("\nDestroying List...\n");
//	SLL_DestroyNode(List);
//	
//	return 0;
//}