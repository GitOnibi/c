#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void main(void) {
	int cnt = 0;
	int ran = 0;
	srand((int)time(NULL));

	FILE *fp;
	fp = fopen("c://test/4xRan.txt", "a"); // ¸ðµå r a w
	while (cnt < 20) {
		ran = (rand() % 100) + 1;
		if (ran % 4 == 0) {
			fprintf(fp, "%d ", ran);
			cnt++;
		}
	}
	fclose(fp);
}