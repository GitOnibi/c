#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	int i = 150;
	int* ptr = &i;
	printf("i\t= %d\n", i);
	printf("&i\t= %p\n", &i);
	printf("*&i\t= %d\n", *&i);
	puts("");
	printf("ptr\t= %p\n", ptr);
	printf("*ptr\t= %d\n", *ptr);
	printf("*&ptr\t= %p\n", *&ptr);

	return;
}