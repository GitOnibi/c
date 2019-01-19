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
	printf("숫자를 입력 : ");
	scanf("%d", &num);
	return num;
}

void output(int num) {
	printf("입력한 숫자는 %d입니다", num);
}