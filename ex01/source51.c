#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ��� �����
#define SIZE 100

// ����ü �����
typedef double d;
typedef struct member {
	int	num;
	char name[10];
	int phone;
	int birth;
}mem;

// �Լ� �����
void input(mem* m);
void view(mem* m);

// �������� �����
int cnt = 0; // ������ �Է� Ƚ��

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
		printf("�޸𸮰� �����մϴ�.\n");
		return;
	}
	m[cnt].num = cnt + 1;
	printf("�̸� : ");
	scanf("%s", m[cnt].name);
	printf("������� : ");
	scanf("%d", &m[cnt].birth);
	printf("����ó : ");
	scanf("%d", &m[cnt].phone);
	cnt++;
}

void view(mem* m) {
	for (int i = 0; i < cnt; i++) {
		printf("num : %d\t �̸� : %s\t ������� : %d\t ����ó : %d\n", m[i].num, m[i].name, m[i].birth, m[i].phone);
	}
}