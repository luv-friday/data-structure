#include <stdio.h>
int _BinSearch(int arr[], int left, int right, int data)
{
	if (left <= right)
	{
		int middle = (left + right) / 2;
		if (data < arr[middle])
			return _BinSearch(arr, left, right - 1, data);
		else if (data > arr[middle])
			return _BinSearch(arr, left + 1, right, data);
		else
			return middle;
	}
}
int BinSearch(int arr[], int size, int data)
{
	return _BinSearch(arr, 0, size - 1, data);		//�������̽� ���� �����ؼ� ����Ұ�
}
int main()
{
	int arr[10] = { 10, 35, 45, 48, 50, 57, 69, 72, 83, 96 };
	int size = 10;

	int idx = BinSearch(arr, size, 48);
	if (idx != -1)
		printf("[%d] : %d\n", idx, arr[idx]);
}

//#include <stdio.h>		//�����˻��� ����Լ� ��� , ������� (�Ǻ���ġ�� ����)
//int _BinSearch(int arr[], int left, int right, int data)		//�������̽� ����
//{
//	if (left <= right)	//��������
//	{
//		int middle = (left + right) / 2;	
//		if (data < arr[middle])		//����
//		{
//			int idx = _BinSearch(arr, left, right - 1, data);
//			return idx;
//		}
//		else if (data > arr[middle])	//����
//		{
//			int idx = _BinSearch(arr, left+1, right, data);
//			return idx;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//}
//int BinSearch(int arr[], int size, int data)		//����Լ� ȣ���� ���ϵ��� ���� ����
//{
//	return _BinSearch(arr, 0, size-1, data);
//}
//int main()
//{
//	int arr[10] = { 10, 35, 45, 48, 50, 57, 69, 72, 83, 96 };
//	int size = 10;
//
//	int idx = BinSearch(arr, size, 48);
//	if( idx != -1)
//		printf("[%d] : %d\n", idx, arr[idx]);
//}

//#include <stdio.h>
//int Fibonacci(int n)
//{
//	if (n == 1)		//��������
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n-2)+Fibonacci(n-1);		//������� : ȣ���Ҷ� �ڵ�� ��ġ ex f(5)�϶� 
//		//f(4)�� ȣ��ɶ� �ڵ� ��ġ�� f(3)�� ������� ���ƿ�����
//}
//int main()
//{
//	int result = Fibonacci(5);
//
//	printf("%d \n", result);
//}
//
//#include <stdio.h>
//int Factorial(int n)
//{
//	if (n == 1)		//1�� ��������
//		return 1;
//	else
//		return Factorial(n - 1) * n;
//}
//int main()
//{
//	int result = Factorial(5);
//
//	printf("%d \n", result);
//}

//#include <stdio.h>
//void Print(int n)
//{
//	printf("+%d \n", n);
//	if (n > 0)
//	{
//		Print(n - 1);		//����Ǵ� ������ �˾ƾ���
//		Print(n - 2);
//		Print(n - 3);
//	}
//	printf("-%d \n", n);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n)
//{
//	printf("+%d \n", n);
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	printf("-%d \n", n);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n)
//{
//	printf("+%d \n", n);
//	if (n > 0)
//		Print(n - 1);
//	printf("-%d \n", n);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n)
//{
//	printf("%d \n", n);
//	if (n > 0)
//		Print(n - 1);
//	printf("%d \n", n);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}
//
//#include <stdio.h>
//void Print(int n)		//��°���� ������ why? ��� -> ���ǿ� ������ ȣ��, �Լ��� �������� �����ġ ���� �˾ƾ���
//{
//	printf("%d \n", n);
//	if (n > 0 )
//		Print(n - 1);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h> 
//void Print(int n)
//{
//	printf("%d \n", n);
//	if (n != 0)				//��������
//		Print(n-1);			//�������ǿ� �����ϰ� �ۼ�
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) //���Լ��� ������ : ȣ�⸸ ������ , ���ᰡ ���� ����Լ��� ���� 2����, ���ᰡ �����ؾ��� �������ǿ� ����
//{	
// printf("%d \n", n);
//	if (n != 0) 
//		Print(n); //�Լ����ο��� �����Լ��� ��� ȣ��
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void a() 
//{
//}
//void b() 
//{
//	a();
//}
//void c()
//{
//	a();
//	b();
//}
//void main()
//{
//	a();
//	b();
//	c();
//}

//#include <stdio.h>
//void Print2(int n)
//{
//	printf("Print2 : %d\n", n);
//}
//void Print3(int n)
//{
//	printf("Print3 : %d\n", n);
//}
//void Print(int n)
//{
//	printf("Print : %d\n", n);
//	Print2(4);
//	Print3(5);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print2(int n)  //�Լ��� ȣ�� ���� p->p1->p2
//{
//	printf("Print2 : %d\n", n);
//}
//void Print3(int n)
//{
//	printf("Print3 : %d\n", n);
//}
//void Print(int n)
//{
//	printf("Print : %d\n", n);
//	Print2(4);
//	Print3(5);
//}
//int main()
//{
//	Print(3);
//	return 0;
//}
