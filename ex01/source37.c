#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swapStr(char* a, char* b);

void main() {

	char* str1 = "ABC";
	char* str2 = "123";

	printf("str1=%s\tstr2=%s\n", str1, str2);
	swapStr(&str1, &str2);
	printf("str1=%s\tstr2=%s\n", str1, str2);

	return;
}

void swapStr(char** a, char** b) {
	char* temp = *a;
	*a = *b;
	*b = temp;
}