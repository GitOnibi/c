#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int arr[4][3]	= { 0 };
	int cnt			= 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d호의 주민 수를 입력하세요 : ", ((i + 1) * 100) + (j + 1));
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
			printf("%d호 : %d명\t", ((i + 1) * 100) + (j + 1), arr[i][j]);
		}
		printf("\n");
	}
	printf("총 주민 수는 %d 명 입니다.", cnt);

	return;
}