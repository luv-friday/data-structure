#include <stdio.h>
#include <stdlib.h>
typedef struct q_
{
	int* queue;
	int front, rear;
	int capacity;
} Queue;
// 서버(Queue)
void Push(Queue* q, int data)
{
	if ((q->rear + 1) % q->capacity == q->front)
		return;

	q->rear = (q->rear + 1) % q->capacity;
	q->queue[q->rear] = data;
}
int Pop(Queue* q)
{
	if (q->front == q->rear)
		return 0xfffffff;

	q->front = (q->front + 1) % q->capacity;
	return q->queue[q->front];
}
void InitQueue(Queue* q, int cap)
{
	q->queue = (int*)malloc(sizeof(int) * cap);
	q->capacity = cap;
	q->front = q->rear = 0;
}
void UninitQueue(Queue* q)
{
	free(q->queue);
	q->front = q->rear = 0;
}
//////////////////클라이언트
int main()
{
	Queue q1;
	Queue q2;

	InitQueue(&q1, 100);
	Push(&q1, 10);
	Push(&q1, 20);
	Push(&q1, 30);

	InitQueue(&q2, 500);
	Push(&q2, 100);
	Push(&q2, 150);

	printf("queue1 : %d\n", Pop(&q1));
	printf("queue1 : %d\n", Pop(&q1));
	printf("queue1 : %d\n", Pop(&q1));
	UninitQueue(&q1);

	printf("queue2 : %d\n", Pop(&q2));
	printf("queue2 : %d\n", Pop(&q2));
	UninitQueue(&q2);
}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct q_
//{
//	int* queue;
//	int front, rear;
//	int capacity;
//} Queue;
//// 서버(Queue)
//void Push(Queue* q, int data)
//{
//	if ((q->rear + 1) % q->capacity == q->front)
//		return;
//
//	q->rear = (q->rear + 1) % q->capacity;
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q)
//{
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % q->capacity;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q, int cap)
//{
//	q->queue = (int*)malloc(sizeof(int) * cap);
//	q->capacity = cap;
//	q->front = q->rear = 0;
//}
//void UninitQueue(Queue* q)
//{
//	free(q->queue);
//	q->front = q->rear = 0;
//}
////////////////////클라이언트
//int main()
//{
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1, 100);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2, 500);
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2 : %d\n", Pop(&q2));
//	printf("queue2 : %d\n", Pop(&q2));
//	UninitQueue(&q2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct q_
//{
//	int* queue; //배열의 개수를 고정하지 않기 위함
//	int front, rear;
//} Queue;
//// 서버(Queue)
//void Push(Queue* q, int data)
//{
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	q->rear = (q->rear + 1) % 5;
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q)
//{
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q, int cap)
//{
//	q->queue = (int*)malloc(sizeof(int)* cap);
//	q->front = q->rear = 0;
//}
//void UninitQueue(Queue* q)
//{
//	free(q->queue);
//	q->front = q->rear = 0;
//}
////////////////////클라이언트
//int main()
//{
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1,5);
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2,5);
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2 : %d\n", Pop(&q2));
//	printf("queue2 : %d\n", Pop(&q2));
//	UninitQueue(&q2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct q_
//{
//	int queue[5];
//	int front, rear;
//} Queue;
//// 서버(Queue)
//void Push(Queue* q, int data)
//{
//	if ((q->rear + 1) % 5 == q->front)
//		return;
//
//	q->rear = (q->rear + 1) % 5;
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q)
//{
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
//void InitQueue(Queue* q)  //상태변수 초기화
//{
//	q->front = q->rear = 0; //꼭 0은 아니어도 됨
//}
//void UninitQueue(Queue* q) //상태변수 마무리
//{
//	q->front = q->rear = 0;
//}
////////////////////클라이언트
//int main()
//{
//	Queue q1;
//	Queue q2;
//
//	InitQueue(&q1); //상태변수 초기화, 상태변수기 때문에 주소를 참조
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	InitQueue(&q2);
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	UninitQueue(&q1);
//
//	printf("queue2 : %d\n", Pop(&q2));
//	printf("queue2 : %d\n", Pop(&q2));
//	UninitQueue(&q2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct q_ //구조체 선언
//{
//	int queue[5];
//	int front, rear;
//} Queue;
//// 서버(Queue)
//void Push(Queue* q, int data)
//{
//	if ((q->rear + 1) % 5 == q->front)  //->주소참조 화살표로 사용
//		return;
//
//	q->rear = (q->rear + 1) % 5;
//	q->queue[q->rear] = data;
//}
//int Pop(Queue* q)
//{
//	if (q->front == q->rear)
//		return 0xfffffff;
//
//	q->front = (q->front + 1) % 5;
//	return q->queue[q->front];
//}
////////////////////클라이언트
//int main()
//{
//	Queue q1 = { 0 };  //초기화 
//	Queue q2 = { 0 };
//
//	Push(&q1, 10);
//	Push(&q1, 20);
//	Push(&q1, 30);
//
//	Push(&q2, 100);
//	Push(&q2, 150);
//
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//	printf("queue1 : %d\n", Pop(&q1));
//
//	printf("queue2 : %d\n", Pop(&q2));
//	printf("queue2 : %d\n", Pop(&q2));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue)
//void Push(int queue[], int* pfront, int* prear, int data)
//{
//	if ((*prear + 1) % 5 == *pfront)
//		return;
//
//	*prear = (*prear + 1) % 5;
//	queue[*prear] = data;
//}
//int Pop(int queue[], int* pfront, int* prear)
//{
//	if (*pfront == *prear)
//		return 0xfffffff;
//
//	*pfront = (*pfront + 1) % 5;
//	return queue[*pfront];
//}
////////////////////클라이언트
//int main()
//{
//	int queue1[5];
//	int front1 = 0, rear1 = 0;
//	int queue2[5];
//	int front2 = 0, rear2 = 0;
//
//	Push(queue1, &front1, &rear1, 10);
//	Push(queue1, &front1, &rear1, 20);
//	Push(queue1, &front1, &rear1, 30);
//
//	Push(queue2, &front2, &rear2, 100);
//	Push(queue2, &front2, &rear2, 150);
//
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//
//	printf("queue2 : %d\n", Pop(queue2, &front2, &rear2));
//	printf("queue2 : %d\n", Pop(queue2, &front2, &rear2));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue) 포인터 변수 사용
//void Push(int queue[], int* pfront, int* prear, int data)
//{
//	if ((*prear + 1) % 5 == *pfront)
//		return;
//
//	*prear = (*prear + 1) % 5;
//	queue[*prear] = data;
//}
//int Pop(int queue[], int* pfront, int* prear)
//{
//	if (*pfront == *prear)
//		return 0xfffffff;
//
//	*pfront = (*pfront + 1) % 5;
//	return queue[*pfront];
//}
////////////////////클라이언트
//int main()
//{
//	int queue1[5];
//	int front1 = 0, rear1 = 0;
//	int queue2[5];
//	int front2 = 0, rear2 = 0;
//
//	Push(queue1, &front1, &rear1, 10);
//	Push(queue1, &front1, &rear1, 20);
//	Push(queue1, &front1, &rear1, 30);
//
//	Push(queue2, &front2, &rear2, 100);
//	Push(queue2, &front2, &rear2, 150);
//
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//	printf("queue1 : %d\n", Pop(queue1, &front1, &rear1));
//
//	printf("queue2 : %d\n", Pop(queue2, &front2, &rear2));
//	printf("queue2 : %d\n", Pop(queue2, &front2, &rear2));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue)
//void Push(int data)
//{
//	if ((rear + 1)%5 == front)
//		return;
//
//	rear = (rear + 1) % 5;
//	queue[rear] = data;
//}
//int Pop()
//{
//	if (front == rear)
//		return 0xfffffff;
//
//	front = (front + 1) % 5;
//	return queue[front];
//}
////////////////////클라이언트
//int main()
//{
//	int queue1[5];  //큐 1, 2 등 여러개로 사용 
//	int front1 = 0, rear1 = 0;
//	int queue2[5];
//	int front2 = 0, rear2 = 0;
//
//	Push(queue1, front1, rear1, 10);
//	Push(queue1, front1, rear1, 20);
//	Push(queue1, front1, rear1, 30);
//
//	Push(queue2, front2, rear2, 100);
//	Push(queue2, front2, rear2, 150);
//
//	printf("queue1 : %d\n", Pop(queue1, front1, rear1));
//	printf("queue1 : %d\n", Pop(queue1, front1, rear1));
//	printf("queue1 : %d\n", Pop(queue1, front1, rear1));
//
//	printf("queue2 : %d\n", Pop(queue2, front2, rear2));
//	printf("queue2 : %d\n", Pop(queue2, front2, rear2));
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue) 원형큐
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data)
//{
//	if ((rear + 1)%5 == front) //큐가 꽉 차 있는 상태일때
//		return;
//	rear = (rear + 1) % 5;  //01234를 반복하는 코드 
//	queue[rear] = data;
//}
//int Pop() 
//{
//	if (front == rear) 
//		return 0xfffffff; //큐가 비어있어서 꺼낼수 없을때 오류값 반환
//	front = (front + 1) % 5;
//	return queue[front];
//}
////////////////////
////클라이언트 
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue) 선형큐 - 문제가 있음
//int queue[5];
//int front = 0, rear = 0;
//void Push(int data)
//{
//	queue[rear++] = data;
//}
//int Pop()
//{
//	return queue[front++];
//}
////////////////////
////클라이언트 
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue)
//int queue[10];
//int front = 0, rear = 0;
//void Push(int data)
//{
//	queue[rear++] = data;	
//}
//int Pop()
//{
//	return queue[front++];
//}
////////////////////
////클라이언트 
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop()); //10
//	printf("%d\n", Pop()); //20
//	printf("%d\n", Pop()); //30
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 서버(Queue)
//void Push(int data)
//{
//}
//int Pop()
//{
//	return 0;
//}
////////////////////
////클라이언트 
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop() ); //10
//	printf("%d\n", Pop() ); //20
//	printf("%d\n", Pop() ); //30
//	return 0;
//}