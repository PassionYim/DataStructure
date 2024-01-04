//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct TmpNode
//{
//	char* Data;
//	struct TmpNode* NextNode;
//}Node;
//typedef struct TmpLinkedQueue
//{
//	Node* Front;
//	Node* Rear;
//	int Count;
//}LinkedQueue;
////
//void LQ_CreateQueue(LinkedQueue** Queue);
//void LQ_DestroyQueue(LinkedQueue* Queue);
//Node* LQ_CreateNode(char* NewData);
//void LQ_DestroyNode(Node* Node);
//void LQ_EnQueue(LinkedQueue* Queue, Node* NewNode);
//Node* LQ_DeQueue(LinkedQueue* Queue);
//int LQ_IsEmpty(LinkedQueue* Queue);
////
//void LQ_CreateQueue(LinkedQueue** Queue)
//{
//	(*Queue) = (LinkedQueue*)malloc(sizeof(LinkedQueue));
//	(*Queue)->Front = NULL;
//	(*Queue)->Rear = NULL;
//	(*Queue)->Count = 0;
//}
//void LQ_DestroyQueue(LinkedQueue* Queue)
//{
//	while (!LQ_IsEmpty(Queue))
//	{
//		Node* Popped = LQ_DeQueue(Queue);
//		LQ_DestroyNode(Popped);
//	}
//	free(Queue);
//}
//Node* LQ_CreateNode(char* NewData)
//{
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->Data = (char*)malloc(strlen(NewData) + 1);
//	strcpy_s(NewNode->Data, strlen(NewData) + 1, NewData);
//	NewNode->NextNode = NULL;
//	return NewNode;
//}
//void LQ_DestroyNode(Node* Node)
//{
//	free(Node->Data);
//	free(Node);
//}
//void LQ_EnQueue(LinkedQueue* Queue, Node* NewNode)
//{
//	if (Queue->Front == NULL)
//	{
//		Queue->Front = NewNode;
//		Queue->Rear = NewNode;
//		Queue->Count++;
//	}
//	else
//	{
//		Queue->Rear->NextNode = NewNode;
//		Queue->Rear = NewNode;
//		Queue->Count++;
//	}
//}
//Node* LQ_DeQueue(LinkedQueue* Queue)
//{
//	Node* Front = Queue->Front;
//	if (Queue->Front->NextNode == NULL)
//	{
//		Queue->Front = NULL;
//		Queue->Rear = NULL;
//	}
//	else
//	{
//		Queue->Front = Queue->Front->NextNode;
//	}
//	Queue->Count--;
//	return Front;
//}
//int LQ_IsEmpty(LinkedQueue* Queue)
//{
//	return (Queue->Front == NULL);
//}
//int main(void)
//{
//	Node* Popped;
//	LinkedQueue* Queue;
//	LQ_CreateQueue(&Queue);
//	LQ_EnQueue(Queue, LQ_CreateNode("a"));
//	LQ_EnQueue(Queue, LQ_CreateNode("b"));
//	LQ_EnQueue(Queue, LQ_CreateNode("c"));
//	LQ_EnQueue(Queue, LQ_CreateNode("d"));
//	printf("Queue Size : %d\n\n", Queue->Count);
//	while (LQ_IsEmpty(Queue) == 0)
//	{
//		Popped = LQ_DeQueue(Queue);
//		printf("DeQueue : %s\n", Popped->Data);
//		LQ_DestroyNode(Popped);
//	}
//	
//	LQ_DestroyQueue(Queue);
//	return 0;
//}