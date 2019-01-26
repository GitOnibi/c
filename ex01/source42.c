#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArr(char* strArr[], int len);
void sort(char* strArr[], int len);
int myStrcmp(char s1[], char s2[]); // 문자열 비교 함수

void main() {
	char *strArr[] = { "qwer", "tyui", "asdf", "ghjk", "zxcv", "bnmp" };
	const int LEN = sizeof(strArr) / sizeof(strArr[0]);

	printArr(strArr, LEN);
	sort(strArr, LEN);
	printArr(strArr, LEN);

	return;
}

void printArr(char* strArr[], int len) {
	printf("{");
	while (len--) {
		printf("%s, ", *strArr++);
	}
	printf("}\n");
}

void sort(char* strArr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if ( myStrcmp(strArr[j], strArr[j + 1]) > 0) {
				char* tmp = strArr[j];
				strArr[j] = strArr[j + 1];
				strArr[j + 1] = tmp;
			}
		}
	}
}

int myStrcmp(char s1[], char s2[]) {
	for (; s1 != '\0' && s2 != '\0'; s1++, s2++) {
		if (*s1 != *s2) {
			break;
		}
	}
	return *s1 - *s2;
}
