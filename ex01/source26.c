#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	int i = 150;
	int* pi = &i;
	int** ppi = &pi;
	int* pi2 = (int*)&pi;
	printf("i\t= %d\n", i);
	printf("&i\t= %p\n", &i);
	printf("*&i\t= %d\n", *&i);
	printf("=========================\n");
	printf("pi\t= %p\n", pi);
	printf("&pi\t= %p\n", &pi);
	printf("*&pi\t= %p\n", *&pi);
	printf("=========================\n");
	printf("ppi\t= %p\n", ppi);
	printf("&ppi\t= %p\n", &ppi);
	printf("*&ppi\t= %p\n", *&ppi);
	printf("=========================\n");
	printf("*ppi\t= %p\n", *ppi);
	printf("**ppi\t= %d\n", **ppi);
	printf("=========================\n");
	printf("pi2\t= %p\n", &pi2);
	printf("*pi2\t= %d\n", *pi2);
	return;
}