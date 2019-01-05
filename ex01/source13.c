#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int user = 0,
		com = 0;

	srand((int)time(NULL));
	com = (rand() % 100) + 1;

	printf("========== 업다운게임 ==========\n");
	printf("1 ~ 100 사이 숫자를 입력하세요\n");
	scanf("%d", &user);
	if (user < 1 && user > 100) {
		printf("범위가 유효하지 않습니다. 1 ~ 100 사이 숫자를 입력하세요.\n");
		scanf("%d", &user);
	}
	while (user != com) {
		if (user < com) {
			printf("정답보다 작습니다. 숫자를 입력하세요");
			scanf("%d", &user);
		}
		else {
			printf("정답보다 큽니다. 숫자를 입력하세요");
			scanf("%d", &user);
		}
	}
	if (user == com) {
		printf("정답입니다!");
	}


	printf("========== 게임을종료 ==========\n");

	return;
}