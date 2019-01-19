#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void changeX(char* a);

void main() {

	char* x = "AAA";

	printf("x=%s\n", x);
	changeX(&x);
	printf("x=%s\n", x);

	return;
}

void changeX(char** a) {
	*a = "ZZZ";
}