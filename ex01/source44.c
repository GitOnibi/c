#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	const int ROW = sizeof(arr) / sizeof(arr[0]);
	const int COL = sizeof(arr[0]) / sizeof(arr[0][0]);

	int* arrPnt = malloc(sizeof(arr));

	if (arrPnt == NULL) {
		printf("out of memory!!!!!");
		exit(1);
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arrPnt[i] = arr[i][j] * 2;
			printf("arrPnt[%d] : %d\t arr[%d][%d] : %d\n", i, arrPnt[i], i, j, arr[i][j]);
		}
	}

	free(arrPnt);


	return;
}