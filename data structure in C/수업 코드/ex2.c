//��ü�ּ� Ctrl+k+c �ּ� ���� Ctrl+k+u

//1. ���α׷� �޸� ����
//2.�����迭 �����迭
//3.����ü�� �ڱ����� ����ü

#include <stdio.h>
struct Point  //typedef
{
	int x;
	int y;
};

int main()
{
	struct Point pt = { 1,2 }; //�ʱ�ȭ
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
//	Point pt = { 1,2 }; //�ʱ�ȭ
//
//	printf("(%d,%d)", pt.x, pt.y);
//
//}

//#include <stdio.h>
//struct Point  //����ü ����
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
//	printf("�ִ� ������ ���� �Է�: ");
//	scanf_s("%d", &size);
//
//	//int arr[size]; //�����迭�� �����϶� ������ ������ �־���� 
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
//	int arr[10]; //�����迭 stack�κ�
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
//int garr[10]; //gd�κп� �����ϰ�
//void func()
//{
//	int farr[10]; //stack �κ�,�Լ����� ������ ������ ȣ�⋚ �����ǰ� ���ϵǰ� ���� ������ �����
//}
//int main()
//{
//	int arr[10]; //stack �κ�
//	func();
//
//}

//#include <stdio.h>
//int garr[10]; //gd�κп� �����ϰ�
//int main()
//{
//	int arr[10]; //stack �κп� �����ϰ�
//	}

//#include <stdio.h>
//int g = 30; //��������,gd�κ�
//int main()
//{
//	int n = 10; //stack �κ�
//	int m = 20;
//
//	printf("%d %d\n", n, m);
//	printf("%d\n", g);
//
//}
