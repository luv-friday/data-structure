#include <stdio.h>
#include <stdlib.h>
//server code
struct Stack //����ü�� ����
{
	int* stack; //�����޸𸮷� ��ȯ, �����迭�� �������
	int top = 0;
};
void Push(Stack* st, int data) //�����ͺ����� ����ؾ���!! �ſ� �߿�
{
	st->stack[st->top] = data;
	++st->top;

}

int Pop(Stack* st)
{
	--st->top; //*top = *top -1
	return st->stack[st->top];
}
void InitStack(Stack* st,int cap) //�߿�!!
{
	st->stack = (int*)malloc(sizeof(int) * cap);
	st->top = 0;
	
}

void UninitStack(Stack* st)
{
	free(st->stack);
	st->top = 0;
}
/////////////
//client code
int main()
{
	Stack st;
	Stack st2;

	InitStack(&st,500); //�ڷᱸ�� �ʱ�ȭ�� �������Լ�
	Push(&st, 10);
	Push(&st, 20);
	Push(&st, 30);

	printf("%d\n", Pop(&st));
	printf("%d\n", Pop(&st));
	printf("%d\n", Pop(&st));
	UninitStack(&st);

	InitStack(&st2,10);
	Push(&st2, 100);
	Push(&st2, 200);

	printf("%d\n", Pop(&st2));
	printf("%d\n", Pop(&st2));
	UninitStack(&st2);

}

//#include <stdio.h>
////server code
//struct Stack //����ü�� ����
//{
//	int stack[10];
//	int top = 0;
//};
//void Push(Stack* st, int data) //�����ͺ����� ����ؾ���!! �ſ� �߿�
//{
//	st->stack[st->top] = data;
//	++st->top;
//
//}
//
//int Pop(Stack* st)
//{
//	--st->top; //*top = *top -1
//	return st->stack[st->top];
//}
//void InitStack(Stack* st) //�߿�!!
//{
//	st->top = 0;
//}
//
//void UninitStack(Stack* st)
//{
//	st->top = 0;
//}
///////////////
////client code
//int main()
//{
//	Stack st;
//	Stack st2;
//
//	InitStack(&st); //�ڷᱸ�� �ʱ�ȭ�� �������Լ�
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	UninitStack(&st);
//
//	InitStack(&st2);
//	Push(&st2, 100);
//	Push(&st2, 200);
//
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//	UninitStack(&st2);
//
//}

//#include <stdio.h>
////server code
//struct Stack //����ü�� ����
//{
//	int stack[10];
//	int top = 0;
//};
//void Push(Stack* st, int data) //�����ͺ����� ����ؾ���!! �ſ� �߿�
//{
//	st->stack[st->top] = data;
//	++st->top;
//
//}
//
//int Pop(Stack* st)
//{
//	--st->top; //*top = *top -1
//	return st->stack[st->top];
//}
///////////////
////client code
//int main()
//{
//	Stack st = { 0 }; //top���� 0���� �ʱ�ȭ �Ϸ���
//	Stack st2 = { 0 }; //top���� 0���� �ʱ�ȭ �Ϸ���
//
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//
//
//	Push(&st2, 100);
//	Push(&st2, 200);
//
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//
//}


//#include <stdio.h>
////server code
//struct Stack //����ü�� ����
//{
//	int stack[10];
//	int top = 0;
//};
//void Push(Stack* st, int data) //�����ͺ����� ����ؾ���!! �ſ� �߿�
//{
//	st->stack[st->top] = data;
//	++st->top;
//
//}
//
//int Pop(Stack* st)
//{
//	--st->top; //*top = *top -1
//	return st->stack[st->top];
//}
///////////////
////client code
//int main()
//{
//	Stack st = { 0 }; //top���� 0���� �ʱ�ȭ �Ϸ���
//
//	Push(&st, 10);
//	Push(&st, 20);
//	Push(&st, 30);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//
//}

//#include <stdio.h>
////server code
//
//void Push(int stack[], int* top, int data) //�����ͺ����� ����ؾ���!! �ſ� �߿�
//{
//	stack[*top] = data;
//	++*top;
//
//}
//
//int Pop(int stack[], int* top)
//{
//	--*top; //*top = *top -1
//	return stack[*top];
//}
///////////////
////client code
//int main()
//{
//	int stack[10]; //���º���
//	int top = 0;
//
//	int stack2[10]; 
//	int top2 = 0;
//	
//	Push(stack, &top, 10);
//	Push(stack, &top, 20);
//	Push(stack, &top, 30);
//
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//
//	Push(stack2, &top2, 100);
//	Push(stack2, &top2, 200);
//
//	printf("%d\n", Pop(stack2, &top2));
//	printf("%d\n", Pop(stack2, &top2));
//	
//
//
//}


//#include <stdio.h>
////server code
//int stack[10]; //���ÿ� �����͸� ������ �޸𸮰��� �ʿ�
//int top = 0;
//void Push(int data)
//{
//	stack[top] = data;
//	++top;
//
//}
//
//int Pop()
//{
//	--top;
//	return stack[top];
//}
///////////////
////client code
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//
//	Push(40);
//	Push(50);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//}

//#include <stdio.h>
////server code
//int stack[10]; //���ÿ� �����͸� ������ �޸𸮰��� �ʿ�
//int top = 0;
//void Push(int data)
//{
//	stack[top] = data;
//	++top;
//
//}
//
//int Pop()
//{
//	--top;
//	return stack[top];
//}
///////////////
////client code
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	int data = 0;
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//}


//#include <stdio.h>
////server code
//void Push(int data)
//{
//
//}
//
//int Pop()
//{
//	return 0;
//}
///////////////
////client code
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	int data=0;
//	data =Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//	data = Pop();
//	printf("%d\n", data);
//
//}

//#include <stdio.h>
//int main()
//{
//	printf("hello");
//}
