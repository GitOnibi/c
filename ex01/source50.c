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
	strcpy(list[0].name, "�达");
	// scanf_s("%s", list[0].name); // �̹� �ּ�
	// scanf_s("%d", &list[0].num); // �����̹Ƿ� �ּ����� �����ڸ� �ٿ��� ��

	// getchar();		// ���1 �Է¹��۸� ���
	// fflush(stdin);	// ���2 �Է½�Ʈ���� ��� (������ ���� ���� ���� ��)
						// fflush(stdout) ��½�Ʈ���� ���
	gets(list[0].name);
	return;
}