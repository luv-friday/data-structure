#include <stdio.h>
#include <algorithm>
using namespace std;

void Swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void PrintList(int list[])
{
	printf("size: %d", list[0]);
	printf("  [");
	for (int i = 1; i <= list[0]; ++i)
		printf("%d ", list[i]);
	printf("] ");
	for (int i = list[0] + 1; i <= 8; ++i)
		printf("%d ", list[i]);
	printf("\n");
}
void Push_heap(int list[])
{
	++list[0];
	int size = list[0];
	int child = size;
	int parent = child / 2;

	while (parent > 0)
	{
		if (list[parent] < list[child])
			Swap(&list[parent], &list[child]);
		else
			break;
		child = parent;
		parent = child / 2;
	}
}
void Make_heap(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		Push_heap(list);
}
void Pop_heap(int list[])
{
	int size = --list[0];
	Swap(&list[1], &list[size + 1]);
	int parent = 1;
	int child = parent * 2;

	while (child <= size)
	{
		if (child < size && list[child] < list[child + 1])
			child = child + 1;
		if (list[parent] < list[child])
			Swap(&list[parent], &list[child]);
		parent = child;
		child = parent * 2;
	}
}
void Sort_heap(int list[])
{
	int size = list[0];
	for (int i = 0; i < size; ++i)
		Pop_heap(list);
}
int main()
{
	int list[10] = { 0, 70, 45, 35, 15, 20, 85, 75, 55 };

	PrintList(list);
	Make_heap(list, 8);
	Sort_heap(list);
	PrintList(list);
}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//void Push_heap(int list[])
//{
//	++list[0];
//	int size = list[0];
//	int child = size;
//	int parent = child / 2;
//
//	while (parent > 0)
//	{
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(&list[1], &list[size + 1]);
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//			child = child + 1;
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		parent = child;
//		child = parent * 2;
//	}
//}
//int main()
//{
//	int list[10] = { 0, 70, 45, 35, 15, 20, 85, 75, 55 };
//
//	PrintList(list);
//	Make_heap(list, 8);
//
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//	Pop_heap(list);
//	PrintList(list);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//void Push_heap(int list[])
//{
//	++list[0];
//	int size = list[0];
//	int child = size;
//	int parent = child / 2;
//
//	while (parent > 0)
//	{
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		Push_heap(list);
//}
//int main()
//{
//	int list[10] = { 0, 70, 45, 35, 15, 20, 85, 75, 55 };
//
//	PrintList(list);
//	Make_heap(list, 8);
//	PrintList(list);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//void Push_heap(int list[])
//{
//	++list[0];
//	int size = list[0];
//	int child = size;
//	int parent = child / 2;
//
//	while (parent > 0)
//	{
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//int main()
//{
//	int list[10] = { 0, 70, 45, 35, 15, 20, 85, 75, 55 };
//
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//void Push_heap(int list[])
//{
//	++list[0];
//	int size = list[0];
//	int child = size;
//	int parent = child / 2;
//
//	while (parent > 0 )
//	{
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//int main()
//{
//	int list[10] = { 5, 70, 45, 35, 15, 20, 85, 75, 55 };
//
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//	Push_heap(list);
//	PrintList(list);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 5, 70, 45, 35, 15, 20, 85, 75, 55 };
//
//	PrintList(list);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	size = 0;
//	for (int i = 0; i < 10; ++i)
//	{
//		++size;
//		push_heap(list, list + size);
//	}
//	//make_heap(list, list + size);
//	PrintList(list, size);
//	/*for (int i = 0; i < 10; ++i)
//	{
//		pop_heap(list, list + size);
//		--size;
//	}*/
//	sort_heap(list, list + size);
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	size = 0;
//	++size;
//	push_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);
//
//	//make_heap(list, list + size);
//	PrintList(list, size);
//	/*for (int i = 0; i < 10; ++i)
//	{
//		pop_heap(list, list + size);
//		--size;
//	}
//	PrintList(list, 10);*/
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	size = 0;
//	push_heap(list, list + 1);
//	++size;
//	push_heap(list, list + 2);
//	++size;
//	push_heap(list, list + 3);
//	++size;
//	//make_heap(list, list + size);
//	PrintList(list, size);
//	/*for (int i = 0; i < 10; ++i)
//	{
//		pop_heap(list, list + size);
//		--size;
//	}
//	PrintList(list, 10);*/
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	make_heap(list, list + size);
//	PrintList(list, size);
//	for (int i = 0; i < 10; ++i)
//	{
//		pop_heap(list, list + size);
//		--size;
//	}
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	make_heap(list, list + size);
//	PrintList(list, size);
//	pop_heap(list, list + size);
//	--size;
//	pop_heap(list, list + size);
//	--size;
//	PrintList(list, 10);
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	PrintList(list, size);
//	//make_heap(list, list + size);
//	PrintList(list, size);
//	sort_heap(list, list + size);
//	PrintList(list, size);
//}


//#include <stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//void _Sort(int list[], int left, int right)
//{
//	if (left <= right)
//	{
//		int pivot = left;
//		int i = left + 1;
//		int j = right;
//
//		do
//		{
//			while (list[pivot] > list[i])
//				++i;
//			while (list[pivot] < list[j])
//				--j;
//			if (i <= j)
//			{
//				Swap(&list[i], &list[j]);
//				++i;
//				--j;
//			}
//		} while (i <= j);
//		Swap(&list[pivot], &list[j]);
//		_Sort(list, left, j-1);
//		_Sort(list, j+1, right);
//	}
//}
//void Sort(int list[], int size)
//{
//	_Sort(list, 0, size - 1);
//}
//int main()
//{
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//
//	Sort(list, size);
//	PrintList(list, size);
//}
