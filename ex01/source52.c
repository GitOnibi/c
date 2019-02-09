#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void) {
	FILE *fp;
	char path[100] = "c://test/";
	char fileName[100];
	printf("파일 이름 : ");
	scanf("%s", fileName);
	strcat(path, fileName);
	strcat(path, ".txt");
	fp = fopen(path, "w"); // 모드 r a w
	fprintf(fp, "%d %d\n", 123, 456);
	fclose(fp);
}