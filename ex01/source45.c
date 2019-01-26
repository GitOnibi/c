#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void add(char* str);
void printArr();

char** strArr;
int len = 2;
int pos = 0;

void main() {
	char charArr[50];
	strArr = malloc(sizeof(charArr) * len);
	printf("단어입력(ENTER : 종료)\n");
	printf(">");
	
	while ( strlen(gets(charArr)) != 0) {
		add(charArr);
		printf(">");
	}

	free(strArr);
	return;
}

void add(char* str) {
	char* tmp = malloc( sizeof(char) * (strlen(str) + 1) );
	char** newStrArr;

	if (pos >= len) {
		newStrArr = malloc(sizeof(char*) * len * 2);
		memcpy(newStrArr, strArr, sizeof(char*) * len);
		strArr = newStrArr;
		len *= 2;

		// strArr = realloc(sizeof(char*) * len);
		// strArr = realloc(strArr, sizeof(char*) * len * 2);
	}

	strcpy(tmp, str);
	strArr[pos++] = tmp;

	printArr();

}

void printArr() {
	printf("strArr = %p [", strArr);
	for (int i = 0; i < pos; i++) {
		printf("%s, ", strArr[i]);
	}
	printf("] len = %d\n", len);
}