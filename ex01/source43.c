#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main() {

	int arr[] = { 1,2,3,4,5 };
	const int LEN = sizeof(arr) / sizeof(arr[0]);

	int* p = malloc(sizeof(arr));

	if (p == NULL) {
		printf("out of memory!!!!!");
		exit(1);
	}

	for (int i = 0; i < LEN; i++) {
		p[i] = arr[i] * 10;
		printf("arr[%d] : %d\tp[%d] : %d\n", i, arr[i], i, p[i]);
	}
	free(p);

	return;
}