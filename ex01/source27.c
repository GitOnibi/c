#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	int score[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	};
	int(*ptr)[3] = score;
	int i, j;

	printf("ptr\t\t= %p\n", ptr);
	printf("*ptr\t\t= %p\n", *ptr);
	printf("score\t\t= %p\n", score);
	printf("*score\t\t= %p\n", *score);
	printf("score[0]\t= %p\n", score[0]);
	printf("&score[0][0]\t= %p\n", &score[0][0]);
	printf("==============================\n");
	printf("sizeof(ptr)\t\t= %d\n", sizeof(ptr));
	printf("sizeof(*ptr)\t\t= %d\n", sizeof(*ptr));
	printf("sizeof(score)\t\t= %d\n", sizeof(score));
	printf("sizeof(*score)\t\t= %d\n", sizeof(*score));
	printf("sizeof(score[0])\t= %d\n", sizeof(score[0]));
	printf("sizeof(score[0][0])\t= %d\n", sizeof(score[0][0]));
	printf("sizeof(&score[0][0])\t= %d\n", sizeof(&score[0][0]));
	printf("==============================\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("score[%d][%d] = %2d\tptr[%d][%d] = %2d\n", i, j, score[i][j], i, j, ptr[i][j]);
		}
	}


	return;
}