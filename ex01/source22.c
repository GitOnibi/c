#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int arr[4][3]	= { 0 };
	int cnt			= 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%dȣ�� �ֹ� ���� �Է��ϼ��� : ", ((i + 1) * 100) + (j + 1));
			scanf("%d", &arr[i][j]);
			printf("\n");
			cnt += arr[i][j];
		}
	}
	printf("\n");
	printf("=========================================\n");
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%dȣ : %d��\t", ((i + 1) * 100) + (j + 1), arr[i][j]);
		}
		printf("\n");
	}
	printf("�� �ֹ� ���� %d �� �Դϴ�.", cnt);

	return;
}