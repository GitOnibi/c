#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {

	int user	= 0;
	int com		= 0;

	srand((int)time(NULL));
	com = (rand() % 3) + 1;
	printf("com : %d\n", com);
	printf("입력하세요(1 = 가위, 2 = 바위, 3 = 보)\n");
	scanf("%d", &user);

	if (user == com) {
		printf("비겼습니다.\n");
	} else if( (user == 1 && com == 2) || (user == 2 && com == 3) || (user == 3 && com == 1) ) {
		printf("졌습니다.\n");
	} else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) {
		printf("이겼습니다.\n");
	}
	return;
}