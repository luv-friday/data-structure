//전체주석 Ctrl+k+c 주석 해제 Ctrl+k+u

//1. 프로그램 메모리 구조
//2.정적배열 동적배열
//3.구조체와 자기참조 구조체

#include <stdio.h>
struct Point  //typedef
{
	int x;
	int y;
};

int main()
{
	struct Point pt = { 1,2 }; //초기화
	struct Point* pp = &pt;

	printf("(%d,%d)", pt.x, pt.y);
	printf("(%d,%d)", (*pp).x,(*pp).y);
	printf("(%d,%d)", pp->x,pp->y);
	printf("(%d,%d)", (&pt)->x, (&pt)->y);


}


//#include <stdio.h>
//typedef struct _Point_tag  //typedef
//{
//	int x;
//	int y;
//}Point;
//
//int main()
//{
//	Point pt = { 1,2 }; //초기화
//
//	printf("(%d,%d)", pt.x, pt.y);
//
//}

//#include <stdio.h>
//struct Point  //구조체 생성
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	int n;
//	Point p1;
//	Point p2;
//	
//	n = 10;
//	p1.x = 1;
//	p1.y = 2;
//	p2.x = 2;
//	p2.y = 4;
//	
//
//	printf("(%d,%d)", p1.x, p1.y);
//	printf("(%d,%d)", p2.x, p2.y);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//	x = 1;
//	y = 2;
//
//	int x2, y2;
//	x2 = 2;
//	y2 = 4;
//
//	printf("(%d,%d)", x, y);
//	printf("(%d,%d)", x2, y2);
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int size = 0;
//	printf("최대 원소의 개수 입력: ");
//	scanf_s("%d", &size);
//
//	//int arr[size]; //정적배열은 컴파일때 개수가 정해져 있어야함 
//	int* pa = (int*)malloc(sizeof(int) * size);
//
//	for (int i = 0; i < size; ++i)
//	{
//		//arr[i] = 10 * i;
//		pa[i] = 10 * i;
//	}
//
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d\n", pa[i]);
//
//	}
//
//	free(pa);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//	int arr[5]; 
//	int* pa = (int*)malloc(sizeof(int)*5);
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i] = 10 * i;
//		pa[i] = 10 * i;
//	}
//	
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%d %d\n", arr[i], pa[i]);
//
//	}
//
//	free(pa);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p;
//	p = malloc(sizeof(int));
//	*p = 100;
//	printf("int : % d\n", *p);
//
//	free(p);
//	
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10]; //정적배열 stack부분
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	arr[5] = 60;
//	arr[6] = 70;
//	arr[7] = 80;
//	arr[8] = 90;
//	arr[9] = 100;
//	for (int i = 0;i < 10;i++)
//		printf("%d\n", arr[i]);
//
//	int* p;
//	p = malloc(40); //p=malloc(sizeof(int)*10);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//	p[5] = 60;
//	p[6] = 70;
//	p[7] = 80;
//	p[8] = 90;
//	p[9] = 100;
//	for (int i = 0;i < 10;i++)
//		printf("%d\n", p[i]);
//
//	free(p);
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p;
//	p = malloc(40);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//	p[5] = 60;
//	p[6] = 70;
//	p[7] = 80;
//	p[8] = 90;
//	p[9] = 100;
//	for (int i = 0;i < 10;i++)
//		printf("%d\n", p[i]);
//
//	free(p);
//
//}


//#include <stdio.h>
//int garr[10]; //gd부분에 연속하게
//void func()
//{
//	int farr[10]; //stack 부분,함수에서 생성된 변수는 호출떄 생성되고 리턴되고 나면 변수는 사라짐
//}
//int main()
//{
//	int arr[10]; //stack 부분
//	func();
//
//}

//#include <stdio.h>
//int garr[10]; //gd부분에 연속하게
//int main()
//{
//	int arr[10]; //stack 부분에 연속하게
//	}

//#include <stdio.h>
//int g = 30; //전역변수,gd부분
//int main()
//{
//	int n = 10; //stack 부분
//	int m = 20;
//
//	printf("%d %d\n", n, m);
//	printf("%d\n", g);
//
//}
