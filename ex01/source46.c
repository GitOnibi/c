#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct profile {
	char name[20];
	int age;
	double tall;
	char* intro;
};

void main() {
	struct profile p01;
	
	strcpy(p01.name,"RYU");
	p01.age = 33;
	p01.tall = 173;
	p01.intro = (char*)malloc(200);
	printf("�ڱ�Ұ�\n");
	gets(p01.intro);

	printf("�̸� : %s\n", p01.name);
	printf("���� : %d\n", p01.age);
	printf("ũ�� : %.1f\n", p01.tall);
	printf("�Ұ� : %s\n", p01.intro);



	return;

}