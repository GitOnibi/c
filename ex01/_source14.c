#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int num1 = 0,
		num2 = 0,
		num3 = 0,
		num4 = 0,
		flag1 = 0,
		flag2 = 0;

	srand((int)time(NULL));
	num1 = (rand() % (7)) + 1;
	num2 = (rand() % (8)) + 1;
	num3 = num1 + 2;
	num4 = (rand() % (8)) + 2;
	while (flag1 == 0) {
		if (num2 == num1 && num2 == num1 + 2 && num2 >= num4 && num4 == num1 && num4 == num1 + 2) {
			num1 = (rand() % (7)) + 1;
			num2 = (rand() % (8)) + 1;
			num3 = num1 + 2;
			num4 = (rand() % (8)) + 2;
			flag1 = 0;
		}
		else {
			flag1 = 1;
		}
	}
	printf("%d\t%d\t%d\t%d", num1, num2, num3, num4);

}