#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int arr[4][3];
	int arrA[4][3] = {	{ 1,  2,  3},
						{ 4,  5,  6},
						{ 7,  8,  9},
						{10, 11, 12} };
	int arrB[3][2] = { {1, 2},
						{3, 4},
						{5, 6} };

	int arrC[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int arrS[4][3] = { 0 };

	printf("arrB[0][0]�� ũ�� : %d\n", sizeof(arrB[0][0]));
	printf("arrB[0]�� ũ�� : %d\n", sizeof(arrB[0]));
	printf("arrB�� ũ�� : %d\n", sizeof(arrB));
	printf("\n");

	printf("arr �迭�� �ʱⰪ�� �Է��� �ּ���\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
	printf("==========");
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] : %2d ", i, j, *&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("==========");
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			arrS[i][j] = arr[i][j] + arrA[i][j];
			printf("arrS[%d][%d]: %2d ", i, j, arrS[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("==========");


	return;
}