#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// ��������
int com		= 0,
	cnt		= 0,
	endNum	= 0;

// �Լ� �����
int setRange();
int ranNum(int endNum);

void main() {

	int user = 0;

	printf("===== ���ٿ���� =====\n");
	setRange();

	printf("������ �Է��ϼ���\n");
	scanf("%d", &user);
	
	if (user <= 0 || user > endNum) {
		printf("�ùٸ� ������ �Է��ϼ���\n");
		scanf("%d", &user);
	}
	
	while (user != com) {
		if (user < com) {
			printf("��!\n");
			cnt++;
			scanf("%d", &user);
		}
		if (user > com) {
			printf("�ٿ�!\n");
			cnt++;
			scanf("%d", &user);
		}
	}

	printf("%d�� ���� ���߼̽��ϴ�!\n", cnt);

	return;
}

// ������
int setRange() {
	printf("������ �Է��ϼ���\n");
	scanf("%d", &endNum);
	if (endNum <= 0) {
		printf("�ùٸ� ������ �Է��ϼ���\n");
		setRange();
	}
	else {
		return com = ranNum(endNum);
	}
}

int ranNum(int endNum) {
	int ran;
	srand((int)time(NULL));
	ran = (rand() % endNum) + 1;
	return ran;
}