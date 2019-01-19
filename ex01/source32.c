#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// 선언부
int max(int a, int b);
int max3(int a, int b, int c);

void main() {

	int num1, num2, num3;

	printf("숫자 3개를 입력하세요\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	printf("가장 큰 수는 %d 입니다", max3(num1, num2, num3));
	
	return;
}

// 구현부
int max(int a, int b) {
	return a > b ? a : b;
}
int max3(int a, int b, int c) {
	return max(max(a, b), c);
}