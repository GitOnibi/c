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
	printf("========== 가위바위보게임 ==========\n");
	printf("게임 횟수를 입력하세요\n");
	scanf("%d", &stage);

	while (i < stage) {
		srand((int)time(NULL));
		com = (rand() % 3) + 1;
		// printf("com : %d\n", com);
		printf("게임 %d : \n", i + 1);
		printf("\t입력하세요(1 = 가위, 2 = 바위, 3 = 보)\n");
		scanf("%d", &user);
		if (user == com) {
			printf("\t비겼습니다.\n");
			drawCnt++;
		}
		else if ((user == 1 && com == 2) || (user == 2 && com == 3) || (user == 3 && com == 1)) {
			printf("\t졌습니다.\n");
			loseCnt++;
		}
		else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) {
			printf("\t이겼습니다.\n");
			winCnt++;
		}
		else {
			printf("올바른 입력이 아닙니다\n");
			falseCnt++;
		}
		i++;
	}
	printf("========== 게임결과 ==========\n");
	printf("%d전\t%d승\t%d패\t%d무\t%d무효\n", stage - falseCnt, winCnt, loseCnt, drawCnt, falseCnt);
	printf("==============================\n");

	return;
}