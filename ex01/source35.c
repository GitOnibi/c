#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int, int);

void main() {

	int x = 5,
		y = 3;

	printf("x=%d\ty=%d\n", x, y);
	swap(&x, &y);
	printf("x=%d\ty=%d\n", x, y);

	return;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}