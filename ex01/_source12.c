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
	printf("========== 컴퓨터가 맞추는 업다운게임 ==========\n");
	printf("1 ~ 100 사이 숫자를 입력하세요\n");
	scanf("%d", &user);
	if (user < 1 && user > 100) {
		printf("범위가 유효하지 않습니다. 1 ~ 100 사이 숫자를 입력하세요.\n");
		scanf("%d", &user);
	}
	while (1) {

		printf("user: %d\n", user);
		srand((int)time(NULL));
		com = (rand() % max) + min;

		printf("생각하신 숫자가 %d 입니까? (up = 1, down = 2)\n", com);
		if (user == com) {
			printf("정답입니다!");
			break;
		}
		scanf("%d", &answer);
		if (answer != 1 && answer != 2) {
			printf("대답 범위가 유효하지 않습니다. up = 1, down = 2 숫자를 입력하세요.\n");
			scanf("%d", &answer);
		}

		if (answer == 1) {
			min = com + 1;
		}
		if (answer == 2) {
			max = com - 1;
		}
	}


	printf("========== 게임을종료 ==========\n");

	return;
}