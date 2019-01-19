#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	char str[100] = { "good" };
	int len;
	printf("%s\n", str);
	printf("%s\n", str + 1);
	printf("============\n");
	gets(str);
	printf("%s\n", str);
	len = strlen(str);
	printf("%d\n", len);
	if (!strcmp(str, "nice")) {
		printf("nice!\n");
	} else {
		printf("false");
	}

	return;
}