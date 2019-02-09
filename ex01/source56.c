#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct member {
	int num;//����
	char name[10];//�̸�
	int phone;//��ȭ��ȣ
	int birth;//����
}mem;
struct school {
	char name[10];
	struct member h;
};
#define size 100

void input();
void view();
void save();
void load();

int count = 0;//�������Է� Ƚ��
mem*data = NULL;
void main() {
	mem list[size];
	data = list;
	load();
	input();
	view();
}
void load() {
	FILE *f;
	f = fopen("c:\\test\\member.txt", "r");
	if (f != NULL) {
		while (!feof(f)) {
			fscanf(f, "%d %s", &data[count].num, data[count].name);
			fscanf(f, "%d %d\n", &data[count].birth, &data[count].phone);
			count++;
		}
		fclose(f);
	}
	else {
		printf("������ ������������\n");
	}
}
void input() {// m=list;
	if (size == count) {
		printf("�޸𸮺���\n");
		return;
	}
	data[count].num = count + 1;
	printf("�̸� : ");
	scanf("%s", data[count].name);
	printf("������� : ");
	scanf("%d", &data[count].birth);
	printf("��ȭ��ȣ : ");
	scanf("%d", &data[count].phone);
	save();
	count++;
}
void save() {
	FILE *f;
	f = fopen("c:\\test\\member.txt", "a+");
	fprintf(f, "%d %s %d %d\n", data[count].num, data[count].name, data[count].birth, data[count].phone);

	fclose(f);
}
void view() {
	int i;
	for (i = 0; i < count; i++) {
		printf("%d. �̸� : %s\n", data[i].num, data[i].name);
		printf("������� %d\n", data[i].birth);
		printf("��ȭ��ȣ %d\n", data[i].phone);
	}
}