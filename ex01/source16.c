#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int arr[10] = { 0 };
	int odd[5] = { 0 },
		even[5] = { 0 };
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			odd[i] = arr[i];
		} else {
			even[i] = arr[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("odd[%d] : %d\n", i, odd[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("even[%d] : %d\n", i, even[i]);
	}
}