#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct profile {
	char name[20];
	int age;
	double tall;
	char* intro;
};

struct student {
	int id;
	double grade;
	struct profile pf;
};


int main(void) {
	struct student p01;

	p01.id = 48000;
	p01.grade = 3.7;
	strcpy(p01.pf.name, "RYU");
	p01.pf.age = 33;
	p01.pf.tall = 173;
	p01.pf.intro = (char*)malloc(200);
	printf("�ڱ�Ұ�\n");
	gets(p01.pf.intro);

	printf("��� : %d\n", p01.id);
	printf("��� : %.1f\n", p01.grade);
	printf("�̸� : %s\n", p01.pf.name);
	printf("���� : %d\n", p01.pf.age);
	printf("ũ�� : %.1f\n", p01.pf.tall);
	printf("�Ұ� : %s\n", p01.pf.intro);
}