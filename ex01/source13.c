#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int user = 0,
		com = 0;

	srand((int)time(NULL));
	com = (rand() % 100) + 1;

	printf("========== ���ٿ���� ==========\n");
	printf("1 ~ 100 ���� ���ڸ� �Է��ϼ���\n");
	scanf("%d", &user);
	if (user < 1 && user > 100) {
		printf("������ ��ȿ���� �ʽ��ϴ�. 1 ~ 100 ���� ���ڸ� �Է��ϼ���.\n");
		scanf("%d", &user);
	}
	while (user != com) {
		if (user < com) {
			printf("���亸�� �۽��ϴ�. ���ڸ� �Է��ϼ���");
			scanf("%d", &user);
		}
		else {
			printf("���亸�� Ů�ϴ�. ���ڸ� �Է��ϼ���");
			scanf("%d", &user);
		}
	}
	if (user == com) {
		printf("�����Դϴ�!");
	}


	printf("========== ���������� ==========\n");

	return;
}