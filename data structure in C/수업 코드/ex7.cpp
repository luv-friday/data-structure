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
//void BubbleSort(int list[], int size)		//�������� �ϼ� �˰���
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
//void BubbleSort(int list[], int size)			//��������
//{
//	for (int i = 0; i < size-1; ++i)		//������ �ε��������� �����ϵ��� size-1
//	{
//		if (list[i] > list[i + 1])		//�����ε����� �ڿ��ε��� �� ��
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
//void InsertionSort(int list[], int size)		//�������� ��ü �˰���
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
//	for (j = cur - 1;j >= 0; --j)	//�ε������� 0������ 
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
//void InsertionSort(int list[], int size)		//�������ľ˰���
//{
//	int cur = 4;		//ó���� Ű�� �����ؼ� ����
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
//void SelectionSort(int list[], int size)		//�������� �˰���
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
//int Min(int list[], int sIndex, int eIndex)		//�����ε����� �������ε��� ��������
//{
//	int min = sIndex;		//������ġ ��ȭ
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
//int Min(int list[], int size)				//���� ���� ���Ҹ� ã�� ��ȯ�ϴ� �Լ�
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
//		int min = 0;				//���� ���� ���� ã�ƺ���
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
