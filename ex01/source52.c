#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void) {
	FILE *fp;
	char path[100] = "c://test/";
	char fileName[100];
	printf("���� �̸� : ");
	scanf("%s", fileName);
	strcat(path, fileName);
	strcat(path, ".txt");
	fp = fopen(path, "w"); // ��� r a w
	fprintf(fp, "%d %d\n", 123, 456);
	fclose(fp);
}