#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int arr[5][5] = { 0 };
	int cnt = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = cnt;
			cnt++;
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}
	printf("===============================================================================");
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", *&arr[i][j]);
		}
		printf("\n");
	}
	printf("===============================================================================");
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", **(arr + i) + j);
		}
		printf("\n");
	}
	printf("===============================================================================");
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}