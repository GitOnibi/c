#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef double d;

typedef struct member {
	int	num;
	char name[10];
	int phone;
	int birth;
}mem;

void input(mem* m) {

}

#define size 100;
void main(void) {

	mem list[size];

	list[0].num = 1;
	list[0].birth = 870211;
	strcpy(list[0].name, "김씨");
	// scanf_s("%s", list[0].name); // 이미 주소
	// scanf_s("%d", &list[0].num); // 변수이므로 주소참조 연산자를 붙여야 함

	// getchar();		// 방법1 입력버퍼를 비움
	// fflush(stdin);	// 방법2 입력스트림을 비움 (데이터 량이 아주 많을 때)
						// fflush(stdout) 출력스트림을 비움
	gets(list[0].name);
	return;
}