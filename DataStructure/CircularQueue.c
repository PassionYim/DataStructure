//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//#include <string.h>
//typedef int ElementType;
//typedef struct TmpNode
//{
//	ElementType Data;
//}Node;
//typedef struct TmpCircularQueue
//{
//	int Capacity;
//	int Front;
//	int Rear;
//	Node* Nodes;
//}CircularQueue;
//void CQ_CreateQueue(CircularQueue** Queue, int Capacity)
//{
//	(*Queue) = (CircularQueue*)malloc(sizeof(CircularQueue));
//	(*Queue)->Nodes = (Node*)malloc(sizeof(Node) * (Capacity + 1));
//	(*Queue)->Capacity = Capacity;
//	(*Queue)->Front = 0;
//	(*Queue)->Rear = 0;
//}
//void CQ_DestroyQueue(CircularQueue* Queue)
//{
//	free(Queue->Nodes);
//	free(Queue);
//}
//void CQ_EnQueue(CircularQueue* Queue, ElementType Data)
//{
//	int Position = 0;
//	if (Queue->Rear == Queue->Capacity)
//	{
//		Position = Queue->Rear;
//		Queue->Rear = 0;
//	}
//	else
//	{
//		Position = Queue->Rear++;
//	}
//	Queue->Nodes[Position].Data = Data;
//}
//ElementType CQ_DeQueue(CircularQueue* Queue)
//{
//	int Position = Queue->Front;
//	if (Queue->Front == Queue->Capacity)
//	{
//		Queue->Front = 0;
//	}
//	else
//	{
//		Queue->Front++;
//	}
//	return Queue->Nodes[Position].Data;
//}
//int CQ_GetSize(CircularQueue* Queue)
//{
//	if (Queue->Front <= Queue->Rear)
//	{
//		return Queue->Rear - Queue->Front;
//	}
//	else
//	{
//		return Queue->Rear + (Queue->Capacity - Queue->Front) + 1;
//	}
//}
//int CQ_IsEmpty(CircularQueue* Queue)
//{
//	return (Queue->Front == Queue->Rear);
//}
//int CQ_IsFull(CircularQueue* Queue)
//{
//	if (Queue->Front < Queue->Rear)
//		return (Queue->Rear - Queue->Front) == Queue->Capacity;
//	else
//		return(Queue->Rear + 1) == Queue->Front;
//}
//int main(void)
//{
//	int i;
//	CircularQueue* Queue;
//	CQ_CreateQueue(&Queue, 5);
//	CQ_EnQueue(Queue, 0);
//	CQ_EnQueue(Queue, 1);
//	CQ_EnQueue(Queue, 2);
//	CQ_EnQueue(Queue, 3);
//	printf("Capacity : %d, Size : %d\n\n", Queue->Capacity, CQ_GetSize(Queue));
//	for (i = 0; i < 3; i++)
//	{
//		printf("DeQueue : %d, Front : %d, Rear : %d\n", CQ_DeQueue(Queue), Queue->Front, Queue->Rear);
//	}
//	printf("\nNow =>> Capacity : %d, Size : %d\n\n", Queue->Capacity, CQ_GetSize(Queue));
//	i = 10;
//	while (!CQ_IsFull(Queue))
//	{
//		CQ_EnQueue(Queue, i++);
//	}
//	printf("Data Insert 10 ~ Queue is Full\n");
//	printf("Now =>> Capacity : %d, Size : %d\n\n", Queue->Capacity, CQ_GetSize(Queue));
//	while (!CQ_IsEmpty(Queue))
//	{
//		printf("Dequeue : %d, ", CQ_DeQueue(Queue));
//		printf("Front : %d, Rear : %d\n", Queue->Front, Queue->Rear);
//	}
//	CQ_DestroyQueue(Queue);
//	return 0;
//}