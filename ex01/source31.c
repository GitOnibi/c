#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int input();
void output();

void main() {

	int num;
	num = input();
	output(num);
	return;
}

int input() {
	int num;
	printf("���ڸ� �Է� : ");
	scanf("%d", &num);
	return num;
}

void output(int num) {
	printf("�Է��� ���ڴ� %d�Դϴ�", num);
}