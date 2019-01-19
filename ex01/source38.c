#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sumArr(int arr[], int len);
void printArr(int arr[], int len);
int maxArr(int arr[], int len);

void main() {

	int arr[] = { 1,3,4,6,7,9,8,2,5 };
	const int LEN = sizeof(arr) / sizeof(arr[0]);
	int sum = sumArr(arr, LEN);
	int max = maxArr(arr, LEN);

	printArr(arr, LEN);
	printf("sum = %d\n", sum);
	
	printf("max = %d\n", max);
	return;
}

int sumArr(int arr[], int len) {
	int sum = 0;
	while (len--) {
		sum += *arr++;
	}
	return sum;
}
void printArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
int maxArr(int arr[], int len) {
	int max = arr[0];
	while (len--) {
		if (max < *arr) {
			max = *arr;
		}
		*arr++;
	}
	return max;
}