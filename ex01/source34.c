#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 전역변수
int com		= 0,
	cnt		= 0,
	endNum	= 0;

// 함수 선언부
int setRange();
int ranNum(int endNum);

void main() {

	int user = 0;

	printf("===== 업다운게임 =====\n");
	setRange();

	printf("정답을 입력하세요\n");
	scanf("%d", &user);
	
	if (user <= 0 || user > endNum) {
		printf("올바른 범위를 입력하세요\n");
		scanf("%d", &user);
	}
	
	while (user != com) {
		if (user < com) {
			printf("업!\n");
			cnt++;
			scanf("%d", &user);
		}
		if (user > com) {
			printf("다운!\n");
			cnt++;
			scanf("%d", &user);
		}
	}

	printf("%d번 만에 맞추셨습니다!\n", cnt);

	return;
}

// 구현부
int setRange() {
	printf("범위를 입력하세요\n");
	scanf("%d", &endNum);
	if (endNum <= 0) {
		printf("올바른 범위를 입력하세요\n");
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