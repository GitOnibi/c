#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// �����
int max(int a, int b);
int max3(int a, int b, int c);

void main() {

	int num1, num2, num3;

	printf("���� 3���� �Է��ϼ���\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	printf("���� ū ���� %d �Դϴ�", max3(num1, num2, num3));
	
	return;
}

// ������
int max(int a, int b) {
	return a > b ? a : b;
}
int max3(int a, int b, int c) {
	return max(max(a, b), c);
}