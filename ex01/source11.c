#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int user = 0,
		com = 0,
		stage = 0,
		i = 0,
		winCnt = 0,
		loseCnt = 0,
		drawCnt = 0,
		falseCnt = 0;
	printf("========== �������������� ==========\n");
	printf("���� Ƚ���� �Է��ϼ���\n");
	scanf("%d", &stage);

	while (i < stage) {
		srand((int)time(NULL));
		com = (rand() % 3) + 1;
		// printf("com : %d\n", com);
		printf("���� %d : \n", i + 1);
		printf("\t�Է��ϼ���(1 = ����, 2 = ����, 3 = ��)\n");
		scanf("%d", &user);
		if (user == com) {
			printf("\t�����ϴ�.\n");
			drawCnt++;
		}
		else if ((user == 1 && com == 2) || (user == 2 && com == 3) || (user == 3 && com == 1)) {
			printf("\t�����ϴ�.\n");
			loseCnt++;
		}
		else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) {
			printf("\t�̰���ϴ�.\n");
			winCnt++;
		}
		else {
			printf("�ùٸ� �Է��� �ƴմϴ�\n");
			falseCnt++;
		}
		i++;
	}
	printf("========== ���Ӱ�� ==========\n");
	printf("%d��\t%d��\t%d��\t%d��\t%d��ȿ\n", stage - falseCnt, winCnt, loseCnt, drawCnt, falseCnt);
	printf("==============================\n");

	return;
}