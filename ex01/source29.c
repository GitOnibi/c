#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	char* ptrArr[] = { "abcd", "123", "ABC" };
	char* tmp;
	const int LEN = sizeof(ptrArr) / sizeof(ptrArr[0]);
	int i, j;

	for (i = 0; i < LEN; i++) {
		printf("ptaArr[%d] = %s\n", i, ptrArr[i]);
	}

	for (i = 0; i < LEN; i++) {
		for (j = 0; j < strlen(ptrArr[i]); j++) {
			printf("ptrArr[%d][%d] = %c, %d\n", i, j, ptrArr[i][j], ptrArr[i][j]);
		}
	}

	return;
}