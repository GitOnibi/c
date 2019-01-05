#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	srand((int)time(NULL));
	int arr[50] = { 0 };
	int multiArr[10] = { 0 };

	for (int i = 0; i < 50; i++) {
		arr[i] = (rand() % 50) + 1;
	}

	for(int i = 0; i < 50; i++) {
		printf("arr[%2d] : %2d\t", i , arr[i]);
	}
	
	for(int i = 0; i < 50; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] % (j+1) == 0) {
				multiArr[j]++;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%2d 의 배수 : %2d 개\n", i + 1, multiArr[i]);
	}
	
}