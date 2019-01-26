#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 변수 선언
int arr[][3] = { 1,2,3,4,5,6 };
const int ROW = sizeof(arr) / sizeof(arr[0]);
const int COL = sizeof(arr[0]) / sizeof(arr[0][0]);

// 함수 선언
int sumArr(int(*arr)[3], int row, int col);
void printArr(int(*arr)[3], int row, int col);
int sumArr_re(int* arr, int LEN);

void main() {
	printArr(arr, ROW, COL);
}

// 함수 구현
int sumArr(int(*arr)[3], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

void printArr(int(*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
		}
	}
}

int sumArr_re(int* arr, int LEN) {
	int sum = 0;
	for (int i = 0; i < LEN; i++) {
		sum += *arr++;
	}
	return sum;
}