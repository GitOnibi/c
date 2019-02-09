#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct member {
	int num;//순번
	char name[10];//이름
	int phone;//전화번호
	int birth;//생일
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

int count = 0;//데이터입력 횟수
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
		printf("파일이 존재하지않음\n");
	}
}
void input() {// m=list;
	if (size == count) {
		printf("메모리부족\n");
		return;
	}
	data[count].num = count + 1;
	printf("이름 : ");
	scanf("%s", data[count].name);
	printf("생년월일 : ");
	scanf("%d", &data[count].birth);
	printf("전화번호 : ");
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
		printf("%d. 이름 : %s\n", data[i].num, data[i].name);
		printf("생년월일 %d\n", data[i].birth);
		printf("전화번호 %d\n", data[i].phone);
	}
}