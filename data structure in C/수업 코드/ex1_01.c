//전체주석 Ctrl+k+c 주석 해제 Ctrl+k+u

#include <stdio.h>
int main()
{
	const char* s = "hello"; //문자열의 주소를 s에 담는다!! c언어에는 문자열을 저장하는 형식이 없음.

	printf("%s\n", s);
}


//#include <stdio.h>
//int AddTotalInteger(int a, int b)
//{
//	int sum = 0;
//	for (int i = 1; i < a; ++i)
//		sum += i;
//
//	return(sum);
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int result = AddTotalInteger(10, 20);
//	printf("result : %d\n", result);
//}

//#include <stdio.h>
//int Add(int a, int b)
//{
//	return(a + b);
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int result = Add(a, b);
//	printf("result : %d\n", result);
//}


//#include <stdio.h>
//void PrintHello(int n)  //n은 매개변수
//{
//	for (int i = 0; i < n; ++i)
//		printf("Hello! : %d\n", n);
//	printf("\n");
//}
//int main()
//{
//	PrintHello(2); //2는 인자
//	PrintHello(5);
//}


//#include <stdio.h>
//void PrintHello()  //사용자정의함수
//{
//	printf("Hello!\n");
//	printf("Hello!\n");
//	printf("Hello!\n");
//}
//int main()
//{
//	PrintHello();
//	PrintHello();
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 }; //16byte 연속 메모리
//	
//	int *p = &a; //int* : 정수의 주소를 보관하는 형식 &a: a의 주소
//	int *pa = arr; //&arr[0]
//
//	printf("%d %d\n", *p, *pa);
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int arr[4] = { 10,20,30,40 }; //16byte 연속 메모리
//
//	printf("%d %d %d %d\n", a, b, c, d);
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//
//}


//#include <stdio.h> 
//int main()
//{
//	for (int i = 1; i < 10; ++i) {
//		if (i % 2 == 0)
//			printf("%d\n", i);
//		else
//			printf("%d\n".i * 2);
//	}
//	printf("hello!\n");
//}

//#include <stdio.h>
//int main()
//{
//	printf("hello!\n");
//}


//#include <stdio.h>
//int main()
//{
//	printf("hello!\n");
//}
