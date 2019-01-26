#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* input(int *arr);
void dsp(int *arr);

void main() {
	int arr[5], list[5], book[5];
	int *p[3];
	p[0] = arr;
	p[1] = list;
	p[2] = book;

	for (int i = 0; i < 3; i++) {
		dsp(input(p[i]));
	}
}

int* input(int *arr) {
	for (int i = 0; i < 5; i++) {
		printf("ют╥б : ");
		scanf("%d", &arr[i]);
	}
	return arr;
}

void dsp(int *arr) {
	for (int i = 0; i < 5; i++) {
		printf("%d \n", arr[i]);
	}
}