#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* link;
} Node;
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;

	return n;
}
void AddNode(Node** phead, int data)
{
	if (NULL == *phead)
		* phead = AllocNode(data);
	else {
		Node* n = AllocNode(data);
		n->link = *phead;
		*phead = n;
	}
}
void RemoveNode(Node** phead, int data)
{
	Node* p = *phead;
	Node* pp = p;
	while (p)
	{
		if (data == p->data)
			break;
		pp = p;
		p = p->link;
	}
	if (p) //昏力
	{
		if (pp == p) //head 昏力
			* phead = p->link;
		else
			pp->link = p->link;
		free(p);
	}
}
Node* SearchNode(Node* head, int data)
{
	Node* p = head;
	while (p)
	{
		if (data == p->data)
			return p;
		p = p->link;
	}
	return NULL;
}
typedef struct _hashtable
{
	Node* table[10];
} HashTable;
void PrintHash(HashTable* h)
{
	for (int i = 0; i < 10; ++i)
	{
		printf("[%d] : ", i);
		Node* p = h->table[i];
		while (p)
		{
			printf("%d ", p->data);
			p = p->link;
		}
		printf("\n");
	}
}
int HashFunction(int key)
{
	return key % 10;
}
void AddHash(HashTable* h, int data)
{
	int addr = HashFunction(data);
	AddNode(&h->table[addr], data);
}
void RemoveHash(HashTable* h, int data)
{
	int addr = HashFunction(data);
	RemoveNode(&h->table[addr], data);
}
Node* SearchHash(HashTable* h, int data)
{
	int addr = HashFunction(data);
	Node* p = SearchNode(h->table[addr], data);
	return p;
}
void InitHash(HashTable* h)
{
	for (int i = 0; i < 10; ++i)
		h->table[i] = NULL;
}
void UninitHash(HashTable* h)
{
	for (int i = 0; i < 10; ++i)
	{
		for (Node* p = h->table[i]; p; )
		{
			Node* np = p->link;
			free(p);
			p = np;
		}
	}
}
int main()
{
	HashTable h;
	InitHash(&h);

	AddHash(&h, 21);
	AddHash(&h, 71);
	AddHash(&h, 101);
	AddHash(&h, 57);
	AddHash(&h, 92);
	AddHash(&h, 65);
	AddHash(&h, 82);
	AddHash(&h, 96);
	AddHash(&h, 73);

	Node* p = SearchHash(&h, 21);
	if (NULL != p)
		printf("search  : %d\n", p->data);

	PrintHash(&h);

	UninitHash(&h);

	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int HashFunction(int key)
//{
//	return key % 10;
//}
//void AddHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	AddNode(&h->table[addr], data);
//}
//void RemoveHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	RemoveNode(&h->table[addr], data);
//}
//Node* SearchHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	Node* p = SearchNode(h->table[addr], data);
//	return p;
//}
//void InitHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//		h->table[i] = NULL;
//}
//void UninitHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		for (Node* p = h->table[i]; p; )
//		{
//			Node* np = p->link;
//			free(p);
//			p = np;
//		}
//	}
//}
//int main()
//{
//	HashTable h;
//	InitHash(&h);
//
//	AddHash(&h, 21);
//	AddHash(&h, 71);
//	AddHash(&h, 101);
//	AddHash(&h, 57);
//	AddHash(&h, 92);
//	AddHash(&h, 65);
//	AddHash(&h, 82);
//	AddHash(&h, 96);
//	AddHash(&h, 73);
//
//	Node* p = SearchHash(&h, 21);
//	if (NULL != p)
//		printf("search  : %d\n", p->data);
//
//	PrintHash(&h);
//
//	UninitHash(&h);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int HashFunction(int key)
//{
//	return key % 10;
//}
//void AddHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	AddNode(&h->table[addr], data);
//}
//void RemoveHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	RemoveNode(&h->table[addr], data);
//}
//Node* SearchHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	Node* p = SearchNode(h->table[addr], data);
//	return p;
//}
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddHash(&h, 21);
//	AddHash(&h, 71);
//	AddHash(&h, 101);
//	AddHash(&h, 57);
//	AddHash(&h, 92);
//	AddHash(&h, 65);
//	AddHash(&h, 82);
//	AddHash(&h, 96);
//	AddHash(&h, 73);	
//
//	Node* p = SearchHash(&h, 21);
//	if (NULL != p)
//		printf("search  : %d\n", p->data);
//
//	PrintHash(&h);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int HashFunction(int key)
//{
//	return key % 10;
//}
//void AddHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	AddNode(&h->table[addr], data);
//}
//void RemoveHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	RemoveNode(&h->table[addr], data);
//}
//Node* SearchHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	Node* p = SearchNode(h->table[addr], data);
//	return p;
//}
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddHash(&h, 21);
//	AddHash(&h, 71);
//	AddHash(&h, 101);
//
//	RemoveHash(&h, 71);
//
//	Node* p = SearchHash(&h, 21);
//	if (NULL != p)
//		printf("search  : %d\n", p->data);
//
//	PrintHash(&h);
//
//	return 0;
//}

////#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int HashFunction(int key)
//{
//	return key % 10;
//}
//void AddHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	AddNode(&h->table[addr], data);
//}
//void RemoveHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	RemoveNode(&h->table[addr], data);
//}
//
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddHash(&h, 21);
//	AddHash(&h, 71);
//	AddHash(&h, 101);
//
//	RemoveHash(&h, 71);
//
//	PrintHash(&h);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int HashFunction(int key)
//{
//	return key % 10;
//}
//void AddHash(HashTable* h, int data)
//{
//	int addr = HashFunction(data);
//	AddNode(&h->table[addr], data);
//}
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddHash(&h, 21);
//	AddHash(&h, 71);
//	AddHash(&h, 101);
//
//	PrintHash(&h);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//void PrintHash(HashTable* h)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("[%d] : ", i);
//		Node* p = h->table[i];
//		while (p)
//		{
//			printf("%d ", p->data);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	PrintHash(&h);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//void RemoveNode(Node** phead, int data)
//{
//	Node* p = *phead;
//	Node* pp = p;
//	while (p)
//	{
//		if (data == p->data)
//			break;
//		pp = p;
//		p = p->link;
//	}
//	if (p) //昏力
//	{
//		if (pp == p) //head 昏力
//			* phead = p->link;
//		else
//			pp->link = p->link;
//		free(p);
//	}
//}
//Node* SearchNode(Node* head, int data)
//{
//	Node* p = head;
//	while (p)
//	{
//		if (data == p->data)
//			return p;
//		p = p->link;
//	}
//	return NULL;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddNode(&h.table[1], 21);
//	AddNode(&h.table[1], 71);
//	AddNode(&h.table[1], 101);
//	RemoveNode(&h.table[1], 71);
//	Node* p = SearchNode(h.table[1], 21);
//	if( p != NULL)
//		printf("Search : %d\n", p->data);
//
//	for (Node* p = h.table[1]; p; p = p->link)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if (NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddNode(&h.table[1], 21);
//	AddNode(&h.table[1], 71);
//	AddNode(&h.table[1], 101);
//
//	for (Node* p = h.table[1]; p; p = p->link)
//		printf("%d\n", p->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//void AddNode(Node** phead, int data)
//{
//	if ( NULL == *phead)
//		* phead = AllocNode(data);
//	else {
//		Node* n = AllocNode(data);
//		n->link = *phead;
//		*phead = n;
//	}
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	AddNode(&h.table[1], 21);
//	AddNode(&h.table[1], 71);
//	AddNode(&h.table[1], 101);
//
//	printf("%d\n", h.table[1]->data);
//	printf("%d\n", h.table[1]->link->data);
//	printf("%d\n", h.table[1]->link->link->data);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node
//{
//	int data;
//	struct _node* link;
//} Node;
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->link = NULL;
//
//	return n;
//}
//typedef struct _hashtable
//{
//	Node* table[10];
//} HashTable;
//int main()
//{
//	HashTable h;
//	for (int i = 0; i < 10; ++i)
//		h.table[i] = NULL;
//
//	h.table[1] = AllocNode(21);
//	Node* n = AllocNode(71);
//	n->link = h.table[1];
//	h.table[1] = n;
//
//	printf("%d\n", h.table[1]->data);
//	printf("%d\n", h.table[1]->link->data);
//
//	return 0;
//}
