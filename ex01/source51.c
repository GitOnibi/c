#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 상수 선언부
#define SIZE 100

// 구조체 선언부
typedef double d;
typedef struct member {
	int	num;
	char name[10];
	int phone;
	int birth;
}mem;

// 함수 선언부
void input(mem* m);
void view(mem* m);

// 전역변수 선언부
int cnt = 0; // 데이터 입력 횟수

void main(void) {
	mem list[SIZE];
	input(list);
	input(list);
	input(list);
	view(list);
	return;
}

void input(mem* m) {
	if (cnt == SIZE) {
		printf("메모리가 부족합니다.\n");
		return;
	}
	m[cnt].num = cnt + 1;
	printf("이름 : ");
	scanf("%s", m[cnt].name);
	printf("생년월일 : ");
	scanf("%d", &m[cnt].birth);
	printf("연락처 : ");
	scanf("%d", &m[cnt].phone);
	cnt++;
}

void view(mem* m) {
	for (int i = 0; i < cnt; i++) {
		printf("num : %d\t 이름 : %s\t 생년월일 : %d\t 연락처 : %d\n", m[i].num, m[i].name, m[i].birth, m[i].phone);
	}
}