#include <stdio.h>

typedef unsigned long BitSet;			//집합 형식

#define BitSetNull    (BitSet)0			// 공집합
#define BitSetBits     32				// 유효 비트 수
#define SetOf(no)  ((BitSet)1 << (no))	// 집합 {no}

//집합 원소 확인
int IsMember(BitSet s, int data);
//집합 원소 추가
void Add(BitSet* s, int data);
//집합 원소 삭제
void Remove(BitSet* s, int data);
//원소 개수 반환
int Size(BitSet s);
//집합 원소 출력
void Print(BitSet s);
int IsMember(BitSet s, int data)
{
	return s & SetOf(data);
}
void Print(BitSet s)
{
	printf("{ ");
	for (int i = 0; i < BitSetBits; ++i)
		if ( IsMember(s, i) )
			printf("%d ", i);
	printf("} ");
}
void Add(BitSet* s, int data)
{
	*s |= SetOf(data);
}
void Remove(BitSet* s, int data)
{
	*s &= ~SetOf(data);
}
int Size(BitSet s)
{
	int count = 0;
	for (; s != BitSetNull; ++count)
		s &= s - 1;

	return count;
}
int main()
{
	BitSet A= BitSetNull;

	Add(&A, 1);
	Add(&A, 3);
	Add(&A, 5);
	printf("size : %d\n", Size(A));
	Remove(&A, 3);
	printf("size : %d\n", Size(A));
	Print(A);
}
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//void Remove(Set* s, int data)
//{
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//
//}
//int Capacity(const Set* s)
//{
//	return s->capacity;
//}
//int Size(const Set* s)
//{
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2)
//{
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i)
//		s1->buf[i] = s2->buf[i];
//	s1->size = max;
//}
//int Equal(const Set* s1, const Set* s2)
//{
//	for (int i = 0; i < s1->size; ++i)
//	{
//		int j;
//		for (j = 0; j < s2->size; ++j)
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		if (j == s2->size)
//			return 0;
//	}
//	return 1;
//}
//Set* Union(Set* s1, const Set* s2, const Set* s3)
//{
//	Assign(s1, s2);
//	for (int i = 0; i < s3->size; ++i)
//		Add(s1, s3->buf[i]);
//	return s1;
//}
//Set* Intersection(Set* s1, const Set* s2, const Set* s3)
//{
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i)
//		for (int j = 0; j < s3->size; ++j)
//			if (s2->buf[i] == s3->buf[j])
//				Add(s1, s2->buf[i]);
//	return s1;
//}
//Set* Difference(Set* s1, const Set* s2, const Set* s3)
//{
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i)
//	{
//		int j;
//		for ( j = 0; j < s3->size; ++j)
//		{
//			if (s2->buf[i] == s3->buf[j])
//				break;
//		}
//		if (j == s3->size)
//			Add(s1, s2->buf[i]);
//	}
//	return s1;
//}
//int main()
//{
//	Set A;
//	Set B;
//	Set C;
//	Initialize(&A, 10);
//	Initialize(&B, 10);
//	Initialize(&C, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//	
//	Difference(&C, &A, &B);
//	Print(&A);
//	Print(&B);
//	Print(&C);
//
//	Terminate(&A);
//	Terminate(&B);
//	Terminate(&C);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//void Remove(Set* s, int data)
//{
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//
//}
//int Capacity(const Set* s)
//{
//	return s->capacity;
//}
//int Size(const Set* s)
//{
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2)
//{
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i)
//		s1->buf[i] = s2->buf[i];
//	s1->size = s2->size;
//}
//int Equal(const Set* s1, const Set* s2)
//{
//	for (int i = 0; i < s1->size; ++i)
//	{
//		int j;
//		for (j = 0; j < s2->size; ++j)
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		if (j == s2->capacity)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	Set A;
//	Set B;
//	Initialize(&A, 10);
//	Initialize(&B, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//
//	Assign(&A, &B);
//	Print(&A);
//	Print(&B);
//
//	Terminate(&A);
//	Terminate(&B);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//void Remove(Set* s, int data)
//{
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//
//}
//int Capacity(const Set* s)
//{
//	return s->capacity;
//}
//int Size(const Set* s)
//{
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2)
//{
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i)
//		s1->buf[i] = s2->buf[i];
//	s1->size = s2->size;
//}
//int main()
//{
//	Set A;
//	Set B;
//	Initialize(&A, 10);
//	Initialize(&B, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//
//	Assign(&A, &B);
//	Print(&A);
//	Print(&B);
//
//	Terminate(&A);
//	Terminate(&B);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//void Remove(Set* s, int data)
//{
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//
//}
//int Capacity(const Set* s)
//{
//	return s->capacity;
//}
//int Size(const Set* s)
//{
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2)
//{
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i)
//		s1->buf[i] = s2->buf[i];
//	s1->size = s2->size;
//}
//int main()
//{
//	Set A;
//	Initialize(&A, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Remove(&A, 1);
//	Print(&A);
//	Terminate(&A);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//void Remove(Set* s, int data)
//{
//	int index;
//	if( (index = IsMember(s, data)) != -1 )
//		s->buf[index] = s->buf[--s->size];
//	
//}
//int main()
//{
//	Set A;
//	Initialize(&A, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Remove(&A, 1);
//	Print(&A);
//	Terminate(&A);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	if (IsMember(s, data) != -1)
//		return;
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int IsMember(const Set* s, int data)
//{
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1; //멤버X
//}
//int main()
//{
//	Set A;
//	Initialize(&A, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Add(&A, 3);
//	Print(&A);
//	Terminate(&A);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data)
//{
//	/////////////이미 data 저장?
//	if(s->size < s->capacity )
//		s->buf[s->size++] = data;
//}
//void Print(const Set* s)
//{
//	printf("size : %d", s->size);
//	printf(",    {");
//	for (int i = 0; i < s->size; ++i)
//		printf("%d ", s->buf[i]);
//	printf("}\n");
//}
//int main()
//{
//	Set A;
//	Initialize(&A, 10);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Print(&A);
//	Terminate(&A);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
////////////////////////////////////
//int Initialize(Set* s, int cap)
//{
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0; //성공: 0, 실패 : -1;
//}
//void Terminate(Set* s)
//{
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//int main()
//{
//	Set A;
//	Initialize(&A, 10);
//	//////
//	Terminate(&A);
//	return 0;
//}




//typedef struct {
//	int capacity; //집합의 최대 크기
//	int size;	 //원소의 개수
//	int* buf;	 //집합 배열의 주소
//} Set;
//
//// 집합 초기화
//int Initialize(Set* s, int cap);
//// 집합 원소 확인
//int IsMember(const Set* s, int data);
//// 원소 추가
//void Add(Set* s, int data);
//// 원소 삭제
//void Remove(Set* s, int data);
//// 집합의 저장 가능 최대 원소의 개수
//int Capacity(const Set* s);
//// 원소의 개수
//int Size(const Set* s);
//// 집합 s2를 s1으로 대입
//void Assign(Set* s1, const Set* s2);
//// 집합 s1, s2가 같은지 확인
//int Equal(const Set* s1, const Set* s2);
//// 집합 s2, s3의 합집합을 s1에 대입
//Set* Union(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2, s3의 교집합을 s1에 대입
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
//// 집합 s2-s3의 차집합을 s1에 대입
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
//// 집합 s의 모든 원소를 ​​출력
//void Print(const Set* s);
//// 집합을 메모리에서 제거
//void Terminate(Set* s);
//
//
////////////////////////
//typedef unsigned long BitSet;			//집합 형식
//
//#define BitSetNull    (BitSet)0			// 공집합
//#define BitSetBits     32				// 유효 비트 수
//#define SetOf(no)  ((BitSet)1 << (no))	// 집합 {no}
//
////집합 원소 확인
//int IsMember(BitSet s, int data);
////집합 원소 추가
//void Add(BitSet* s, int data);
////집합 원소 삭제
//void Remove(BitSet* s, int data);
////원소 개수 반환
//int Size(BitSet s);
////집합 원소 출력
//void Print(BitSet s);