#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int user	= 0,
		com		= 0,
		answer	= 0,
		min		= 1,
		max		= 50,
		dMin	= 0,
		dMax	= 0;
	printf("========== ��ǻ�Ͱ� ���ߴ� ���ٿ���� ==========\n");
	printf("1 ~ 100 ���� ���ڸ� �Է��ϼ���\n");
	scanf("%d", &user);
	if (user < 1 && user > 100) {
		printf("������ ��ȿ���� �ʽ��ϴ�. 1 ~ 100 ���� ���ڸ� �Է��ϼ���.\n");
		scanf("%d", &user);
	}
	while (1) {

		printf("user: %d\n", user);
		srand((int)time(NULL));
		com = (rand() % max) + min;

		printf("�����Ͻ� ���ڰ� %d �Դϱ�? (up = 1, down = 2)\n", com);
		if (user == com) {
			printf("�����Դϴ�!");
			break;
		}
		scanf("%d", &answer);
		if (answer != 1 && answer != 2) {
			printf("��� ������ ��ȿ���� �ʽ��ϴ�. up = 1, down = 2 ���ڸ� �Է��ϼ���.\n");
			scanf("%d", &answer);
		}

		if (answer == 1) {
			min = com + 1;
		}
		if (answer == 2) {
			max = com - 1;
		}
	}


	printf("========== ���������� ==========\n");

	return;
}