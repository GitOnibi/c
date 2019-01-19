#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {
	int dir = 0;
	int min = 1;
	int max = 3;
	int curX = 2;
	int curY = 2;
	int board[5][5] = {
		{0,0,0,0,0},
		{0,1,1,1,0},
		{0,1,2,1,0},
		{0,1,1,1,0},
		{0,0,0,0,0}
	};

	// default draw;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (board[i][j] == 0) {
				printf("%s", "■");
			}
			else if (board[i][j] == 1) {
				printf("%s", "□");
			}
			else {
				printf("%s", "★");
			}
		}
		printf("\n");
	}

	// game start;
	while (dir != 5) {
		printf("이동할 방법을 입력\n");
		printf("4-왼쪽 / 8-위쪽 / 6-오른쪽 / 2-아래쪽 / 5-종료\n");
		scanf("%d", &dir);
		switch (dir) {
		case 4:
			if (curX > min) {
				system("cls");
				curX -= 1;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						board[i][j] = 0;
						if (i >= min && i <= max && j >= min && j <= max) {
							board[i][j] = 1;
						}
					}
				}
				board[curY][curX] = 2;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (board[i][j] == 0) {
							printf("%s", "■");
						}
						else if (board[i][j] == 1) {
							printf("%s", "□");
						}
						else {
							printf("%s", "★");
						}
					}
					printf("\n");
				}
			}
			break;
		case 8:
			if (curY > min) {
				system("cls");
				curY -= 1;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						board[i][j] = 0;
						if (i >= min && i <= max && j >= min && j <= max) {
							board[i][j] = 1;
						}
					}
				}
				board[curY][curX] = 2;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (board[i][j] == 0) {
							printf("%s", "■");
						}
						else if (board[i][j] == 1) {
							printf("%s", "□");
						}
						else {
							printf("%s", "★");
						}
					}
					printf("\n");
				}
			}
			break;
		case 6:
			if (curX < max) {
				system("cls");
				curX += 1;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						board[i][j] = 0;
						if (i >= min && i <= max && j >= min && j <= max) {
							board[i][j] = 1;
						}
					}
				}
				board[curY][curX] = 2;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (board[i][j] == 0) {
							printf("%s", "■");
						}
						else if (board[i][j] == 1) {
							printf("%s", "□");
						}
						else {
							printf("%s", "★");
						}
					}
					printf("\n");
				}
			}
			break;
		case 2:
			if (curY < max) {
				system("cls");
				curY += 1;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						board[i][j] = 0;
						if (i >= min && i <= max && j >= min && j <= max) {
							board[i][j] = 1;
						}
					}
				}
				board[curY][curX] = 2;
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (board[i][j] == 0) {
							printf("%s", "■");
						}
						else if (board[i][j] == 1) {
							printf("%s", "□");
						}
						else {
							printf("%s", "★");
						}
					}
					printf("\n");
				}
			}
			break;
		case 5:
			return;
		}
	}
	return;
}