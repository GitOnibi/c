#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	const char *sub[3] = {"����", "����", "����"};
	char name[3][10];
	int score[3][4];
	int i, j, total = 0;
	int rank[3] = { 0, 1, 2 }, tmp;
	// 3 ���� �л� �̸��� ���� ���� ���� �����Է��Ͽ� 1~3��� ������ ����� �����ϰ� ����Ͻÿ�

	for (i = 0; i < 3; i++) {
		printf("�̸�\t:");
		scanf("%s", &name);
		for (j = 0; j < 3; j++) {
			printf("%s\t:", sub[j]);
			scanf("%d", &score[i]);
		}
	}
	return;
}