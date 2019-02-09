#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void) {
	int arr[100], cnt = 0;
	FILE *fp;
	fp = fopen("c://test/read.txt", "r"); // ¸ðµå r a w
	while (!feof(fp)) {
		for (int i = 0; i < 3; i++) {
			fscanf(fp, "%d", &arr[i + cnt]);
		}
		fscanf(fp, "\n");
		cnt += 3;
	}
	fclose(fp);
	for (int i = 0; i < 9; i++) {
		if (i != 0 && i % 3 == 0) {
			printf("\n");
		}
		printf("%d ", arr[i]);
	}
}