#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	for (int i = 2; i <= 9; i++) {
		printf("===== %d ´Ü =====\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}

}