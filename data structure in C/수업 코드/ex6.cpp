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
	return _BinSearch(arr, 0, size - 1, data);		//인터페이스 별도 설정해서 사용할것
}
int main()
{
	int arr[10] = { 10, 35, 45, 48, 50, 57, 69, 72, 83, 96 };
	int size = 10;

	int idx = BinSearch(arr, size, 48);
	if (idx != -1)
		printf("[%d] : %d\n", idx, arr[idx]);
}

//#include <stdio.h>		//이진검색에 재귀함수 사용 , 선형재귀 (피보나치는 비선형)
//int _BinSearch(int arr[], int left, int right, int data)		//인터페이스 구현
//{
//	if (left <= right)	//종료조건
//	{
//		int middle = (left + right) / 2;	
//		if (data < arr[middle])		//하한
//		{
//			int idx = _BinSearch(arr, left, right - 1, data);
//			return idx;
//		}
//		else if (data > arr[middle])	//상한
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
//int BinSearch(int arr[], int size, int data)		//재귀함수 호출이 편하도록 변수 설정
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
//	if (n == 1)		//종료조건
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fibonacci(n-2)+Fibonacci(n-1);		//시험느낌 : 호출할때 코드로 위치 ex f(5)일때 
//		//f(4)가 호출될때 코드 위치는 f(3)의 결과값이 돌아왔을때
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
//	if (n == 1)		//1로 수렴조건
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
//		Print(n - 1);		//진행되는 순서를 알아야함
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
//void Print(int n)		//출력결과가 복잡함 why? 출력 -> 조건에 맞으면 호출, 함수가 끝났을때 어디위치 인지 알아야함
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
//	if (n != 0)				//종료조건
//		Print(n-1);			//종료조건에 수렴하게 작성
//}
//int main()
//{
//	Print(3);
//	return 0;
//}

//#include <stdio.h>
//void Print(int n) //이함수의 문제점 : 호출만 무한히 , 종료가 없음 재귀함수의 조건 2가지, 종료가 가능해야함 종료조건에 수렴
//{	
// printf("%d \n", n);
//	if (n != 0) 
//		Print(n); //함수내부에서 본인함수를 계속 호출
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
//void Print2(int n)  //함수의 호출 순서 p->p1->p2
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
