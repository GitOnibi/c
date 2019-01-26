#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int** init();
int sum(int **arr);
void result(int a);



void main() {
	int **p2;
	p2 = init();
	result( sum(p2) );
}



int** init() {

	static int *arrWrap[3];
	static int arr1[5] = {1,2,3,4,5};
	static int arr2[5] = {11,22,33,44,55};
	static int arr3[5] = {111,222,333,444,555};
	arrWrap[0] = arr1;
	arrWrap[1] = arr2;
	arrWrap[2] = arr3;
	return arrWrap;
}

int sum(int **arr) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

void result(int a) {
	printf("%d\t ", a);

}