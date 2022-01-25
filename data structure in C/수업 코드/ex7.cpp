//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void BubbleSort(int list[], int size)		//버블정렬 완성 알고리즘
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = 0; j < (size - 1) - i; ++j)	
//		{
//			if (list[j] > list[j + 1])
//				Swap(&list[j], &list[j + 1]);
//		}
//	}
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	BubbleSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void BubbleSort(int list[], int size)
//{	
//	for (int j = 0; j < (size - 1) - 0; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 1; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 2; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 3; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 4; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 5; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//	for (int j = 0; j < (size - 1) - 6; ++j)
//	{
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	BubbleSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void BubbleSort(int list[], int size)			//버블정렬
//{
//	for (int i = 0; i < size-1; ++i)		//마지막 인덱스까지만 가능하도록 size-1
//	{
//		if (list[i] > list[i + 1])		//현재인덱스와 뒤에인덱스 값 비교
//			Swap(&list[i], &list[i + 1]);
//	}
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };	
//	int size = 8;
//
//	PrintList(list, size);
//	BubbleSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void InsertionSort(int list[], int size)		//삽입정렬 전체 알고리즘
//{
//	int value, j;
//	for (int i = 1; i < size; ++i)
//	{
//		value = list[i];
//		for (j = i - 1; j >= 0; --j)
//		{
//			if (list[j] > value)
//				list[j + 1] = list[j];
//			else
//				break;
//		}
//		list[j + 1] = value;
//	}
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	//int list[10] = { 20,50,70,80,10,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	InsertionSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void InsertionSort(int list[], int size)
//{
//	int cur = 4;
//	int value = list[cur];
//	int j;
//	for (j = cur - 1;j >= 0; --j)	//인덱스값이 0까지만 
//	{
//		if (list[j] > value)
//			list[j + 1] = list[j];
//		else
//			break;
//	}
//	list[j + 1] = value;
//}
//int main()
//{
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,50,70,80,10,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	InsertionSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void InsertionSort(int list[], int size)		//삽입정렬알고리즘
//{
//	int cur = 4;		//처음엔 키값 지정해서 설정
//	int value = list[cur];
//	int j;
//	for (j = cur - 1; 1; --j)
//	{		
//		if (list[j] > value)
//			list[j + 1] = list[j];
//		else
//			break;
//	}
//	list[j + 1] = value;
//}
//int main()
//{
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,50,70,80,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	InsertionSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//void SelectionSort(int list[], int size)		//선택정렬 알고리즘
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		int min = Min(list, i, size - 1);
//		Swap(&list[i], &list[min]);
//	}
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	SelectionSort(list, size);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)
//{
//	int min = sIndex;
//	for (int i = sIndex + 1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	{
//		for (int i = 0; i < size - 1; ++i)
//		{
//			int min = Min(list, i, size - 1);
//			Swap(&list[i], &list[min]);
//		}
//	}
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int sIndex, int eIndex)		//기준인덱스와 마지막인덱스 변수선언
//{
//	int min = sIndex;		//기준위치 변화
//	for (int i = sIndex+1; i <= eIndex; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	{
//		int min = Min(list, 0, size-1);
//		Swap(&list[0],&list[min]);
//		min = Min(list, 1, size - 1);
//		Swap(&list[1], &list[min]);
//		min = Min(list, 2, size - 1);
//		Swap(&list[2], &list[min]);
//		min = Min(list, 3, size - 1);
//		Swap(&list[3], &list[min]);
//		min = Min(list, 4, size - 1);
//		Swap(&list[4], &list[min]);
//		min = Min(list, 5, size - 1);
//		Swap(&list[5], &list[min]);
//		min = Min(list, 6, size - 1);
//		Swap(&list[6], &list[min]);
//	}
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//int Min(int list[], int size)				//가장 작은 원소를 찾고 반환하는 함수
//{
//	int min = 0;
//	for (int i = 1; i < size; ++i)
//		if (list[min] > list[i])
//			min = i;
//	return min;
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	{
//		int min = Min(list, size);
//		printf("min = %d\n", list[min]);
//	}
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	{
//		int min = 0;				//가장 작은 원소 찾아보기
//		for (int i = 1; i < size; ++i)
//			if (list[min] > list[i])
//				min = i;
//		printf("min : %d\n", min);
//	}	
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
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
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	Swap(&list[0], &list[1]);
//	PrintList(list, size);
//	return 0;
//}
//
//#include<stdio.h>
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
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	Swap(&list[0], &list[1]);
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//	int size = 8;
//
//	PrintList(list, size);
//	{
//		int temp = list[0];
//		list[0] = list[1];
//		list[1] = temp;
//	}
//	PrintList(list, size);
//	return 0;
//}

//#include<stdio.h>
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", list[i]);
//	printf("\n");
//}
//int main()
//{
//	int list[10] = {80,20,70,50,60,90,40,30};
//	int size = 8;
//
//	PrintList(list, size);
//	return 0;
//}
