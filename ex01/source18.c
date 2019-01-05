#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int ranArr[10]	= { 0 };

	srand((int)time(NULL));

	for(int i = 0; i < 10; i++) {
		ranArr[i] = (rand() % 10) + 1;
		for (int j = 0; j < i; j++) {
			if (ranArr[i] == ranArr[j]) {
				ranArr[i] = (rand() % 10) + 1;
				j = -1;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%2d ", ranArr[i]);
	}
}