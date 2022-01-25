#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
	int data;
	struct _node* prev;
	struct _node* next;
} Node;
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->prev = NULL;
	n->next = NULL;

	return n;
}
void FreeNode(Node* p)
{
	free(p);
}
void AddTailList(Node* head, Node* tail, int data)
{
	Node* n = AllocNode(data);
	Node* ptail = tail->prev;

	ptail->next = n;
	n->prev = ptail;
	n->next = tail;
	tail->prev = n;
}
void AddHeadList(Node* head, Node* tail, int data)
{
	Node* n = AllocNode(data);
	Node* nhead = head->next;

	head->next = n;
	n->prev = head;
	n->next = nhead;
	nhead->prev = n;
}
void RemoveList(Node* head, Node* tail, Node* p)
{
	Node* pp = p->prev;
	Node* np = p->next;
	pp->next = np;
	np->prev = pp;
	free(p);
}
void RemoveTailList(Node* head, Node* tail)
{
	RemoveList(head, tail, tail->prev);
}
void RemoveHeadList(Node* head, Node* tail)
{
	RemoveList(head, tail, head->next);
}
void InitList(Node** phead, Node** ptail)
{
	*phead = AllocNode(0);
	*ptail = AllocNode(0);
	(*phead)->next = *ptail;
	(*ptail)->prev = *phead;
}
void UninitList(Node** phead, Node** ptail)
{
	for (Node* p = *phead; p != NULL; )
	{
		Node* np = p->next;
		free(p);
		p = np;
	}
}
int main()
{
	Node* head = NULL;
	Node* tail = NULL;

	InitList(&head, &tail);

	AddTailList(head, tail, 10);
	AddTailList(head, tail, 20);
	AddTailList(head, tail, 30);
	AddTailList(head, tail, 40);
	AddTailList(head, tail, 50);

	AddHeadList(head, tail, 5);
	AddHeadList(head, tail, 1);

	Node* p = head->next->next->next;
	RemoveList(head, tail, p);
	RemoveTailList(head, tail);
	RemoveHeadList(head, tail);

	for (Node* p = head->next; p != tail; p = p->next)
		printf("%d\n", p->data);

	UninitList(&head, &tail);
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddTailList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddHeadList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* nhead = head->next;
//
//	head->next = n;
//	n->prev = head;
//	n->next = nhead;
//	nhead->prev = n;
//}
//void RemoveList(Node* head, Node* tail, Node* p)
//{
//	Node* pp = p->prev;
//	Node* np = p->next;
//	pp->next = np;
//	np->prev = pp;
//	free(p);
//}
//void RemoveTailList(Node* head, Node* tail)
//{
//	RemoveList(head, tail, tail->prev);
//}
//void RemoveHeadList(Node* head, Node* tail)
//{
//	RemoveList(head, tail, head->next);
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddTailList(head, tail, 10);
//	AddTailList(head, tail, 20);
//	AddTailList(head, tail, 30);
//	AddTailList(head, tail, 40);
//	AddTailList(head, tail, 50);
//
//	AddHeadList(head, tail, 5);
//	AddHeadList(head, tail, 1);
//
//	Node* p = head->next->next->next;
//	RemoveList(head, tail, p);
//	RemoveTailList(head, tail);
//	RemoveHeadList(head, tail);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddTailList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddHeadList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* nhead = head->next;
//
//	head->next = n;
//	n->prev = head;
//	n->next = nhead;
//	nhead->prev = n;
//}
//void RemoveList(Node* head, Node* tail, Node* p)
//{
//	Node* pp = p->prev;
//	Node* np = p->next;
//	pp->next = np;
//	np->prev = pp;
//	free(p);
//}
//void RemoveTailList(Node* head, Node* tail)
//{
//	RemoveList(head, tail, tail->prev);
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddTailList(head, tail, 10);
//	AddTailList(head, tail, 20);
//	AddTailList(head, tail, 30);
//	AddTailList(head, tail, 40);
//	AddTailList(head, tail, 50);
//
//	AddHeadList(head, tail, 5);
//	AddHeadList(head, tail, 1);
//
//	Node* p = head->next->next->next;
//	RemoveList(head, tail, p);
//	RemoveTailList(head, tail);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddTailList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddHeadList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* nhead = head->next;
//
//	head->next = n;
//	n->prev = head;
//	n->next = nhead;
//	nhead->prev = n;
//}
//void RemoveList(Node* head, Node* tail, Node* p)
//{
//	Node* pp = p->prev;
//	Node* np = p->next;
//	pp->next = np;
//	np->prev = pp;
//	free(p);
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddTailList(head, tail, 10);
//	AddTailList(head, tail, 20);
//	AddTailList(head, tail, 30);
//	AddTailList(head, tail, 40);
//	AddTailList(head, tail, 50);
//
//	AddHeadList(head, tail, 5);
//	AddHeadList(head, tail, 1);
//
//	Node* p = head->next->next->next;
//	RemoveList(head, tail, p);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddTailList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddHeadList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* nhead = head->next;
//
//	head->next = n;
//	n->prev = head;
//	n->next = nhead;
//	nhead->prev = n;
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddTailList(head, tail, 10);
//	AddTailList(head, tail, 20);
//	AddTailList(head, tail, 30);
//	AddTailList(head, tail, 40);
//	AddTailList(head, tail, 50);
//
//	AddHeadList(head, tail, 5);
//	AddHeadList(head, tail, 1);
//
//	Node* p = head->next->next->next;
//	Node* pp = p->prev;
//	Node* np = p->next;
//	pp->next = np;
//	np->prev = pp;
//	free(p);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddTailList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void AddHeadList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* nhead = head->next;
//
//	head->next = n;
//	n->prev = head;
//	n->next = nhead;
//	nhead->prev = n;
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddTailList(head, tail, 10);
//	AddTailList(head, tail, 20);
//	AddTailList(head, tail, 30);
//	AddTailList(head, tail, 40);
//	AddTailList(head, tail, 50);
//	
//	AddHeadList(head, tail, 5);
//	AddHeadList(head, tail, 1);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	AddList(head, tail, 10);
//	AddList(head, tail, 20);
//	AddList(head, tail, 30);
//	AddList(head, tail, 40);
//	AddList(head, tail, 50);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	Node* n = NULL;
//	n = AllocNode(10);
//	Node* ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	n = AllocNode(20);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	AddList(head, tail, 30);
//
//	n = AllocNode(40);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	n = AllocNode(50);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddList(Node* head, Node* tail, int data)
//{
//	Node* n = AllocNode(data);
//	Node* ptail = tail->prev;
//
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//int main()
//{
//	Node* head = AllocNode(0);
//	Node* tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//
//	Node* n = NULL;
//	n = AllocNode(10);
//	Node* ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	n = AllocNode(20);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	AddList(head, tail, 30);
//
//	n = AllocNode(40);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	n = AllocNode(50);
//	ptail = tail->prev;
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->next->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddList(Node* head, Node** ptail, int data)
//{
//	Node* n = AllocNode(30);
//	(*ptail)->next = n;
//	n->prev = *ptail;
//	*ptail = n;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* n = NULL;
//	n = AllocNode(10);
//	head = tail = n;
//
//	n = AllocNode(20);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	AddList(head, &tail, 30);
//
//	n = AllocNode(40);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	n = AllocNode(50);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->data);
//
//	Node* p = head->next->next->next->next;
//	printf("%d\n", p->data);
//	printf("%d\n", p->prev->data);
//	printf("%d\n", p->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->prev->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddList(Node* head, Node** ptail, int data)
//{
//	Node* n = AllocNode(30);
//	(*ptail)->next = n;
//	n->prev = *ptail;
//	*ptail = n;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* n = NULL;
//	n = AllocNode(10);
//	head = tail = n;
//
//	n = AllocNode(20);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	AddList(head, &tail, 30);
//
//	n = AllocNode(40);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	n = AllocNode(50);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->data);
//
//	Node* p = head->next->next->next->next;
//	printf("%d\n", p->data);
//	printf("%d\n", p->prev->data);
//	printf("%d\n", p->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->prev->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* n = NULL;
//	n = AllocNode(10);
//	head = tail = n;
//
//	n = AllocNode(20);
//	tail ->next = n;
//	n->prev = tail;
//	tail = n;
//
//	n = AllocNode(30);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	n = AllocNode(40);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	n = AllocNode(50);
//	tail->next = n;
//	n->prev = tail;
//	tail = n;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->data);
//
//	Node* p = head->next->next->next->next;
//	printf("%d\n", p->data);
//	printf("%d\n", p->prev->data);
//	printf("%d\n", p->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->prev->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* n = NULL;
//	n = AllocNode(10);
//	head = n;
//
//	n = AllocNode(20);
//	head->next = n;
//	n->prev = head;
//
//	n = AllocNode(30);
//	head->next->next = n;
//	n->prev = head->next;
//
//	n = AllocNode(40);
//	head->next->next->next = n;
//	n->prev = head->next->next;
//
//	n = AllocNode(50);
//	head->next->next->next->next = n;
//	n->prev = head->next->next->next;
//	
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//	printf("%d\n", head->next->next->next->data);
//	printf("%d\n", head->next->next->next->next->data);
//
//	Node* p = head->next->next->next->next;
//	printf("%d\n", p->data);
//	printf("%d\n", p->prev->data);
//	printf("%d\n", p->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->data);
//	printf("%d\n", p->prev->prev->prev->prev->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* n = NULL;
//	head = AllocNode(10);
//	
//	n = AllocNode(20);
//	head->next = n;
//	n->prev = head;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->prev->data);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	head = AllocNode(10);
//	head = AllocNode(20);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* p = AllocNode(10);
//
//	printf("%d\n", p->data);
//
//	FreeNode(p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _node
//{
//	int data;
//	struct _node* prev;
//	struct _node* next;
//} Node ;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//int main()
//{
//	Node* p = AllocNode(10);
//
//	printf("%d\n", p->data);
//
//	free(p);
//
//	return 0;
//}
