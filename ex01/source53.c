#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void) {
	FILE *fp;
	char path[100] = "c://test/";
	char fileName[100];
	char contents[1000];
	printf("���� �̸� : ");
	scanf("%s", fileName);
	printf("���� ���� : ");
	scanf("%s", contents);
	strcat(path, fileName);
	strcat(path, ".txt");
	fp = fopen(path, "w"); // ��� r a w
	fprintf(fp, "%s", contents);
	fclose(fp);
}