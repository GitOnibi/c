#include<stdio.h>

void main() {

	int score = 0;
	char grade, flag = ' ';

	printf("점수를 입력하세요\n");
	scanf("%d", &score);
	if(score >= 90) {
		grade = 'A';
		if(score > 95) {
			flag = '+';
		} else if (score < 95) {
			flag = '-';
		}
	} else if(score >= 80) {
		grade = 'B';
		if (score > 85) {
			flag = '+';
		}
		else if (score < 85) {
			flag = '-';
		}
	} else if (score >= 70) {
		grade = 'C';
		if (score > 75) {
			flag = '+';
		}
		else if (score < 75) {
			flag = '-';
		}
	} else if (score >= 60) {
		grade = 'D';
		if (score > 65) {
			flag = '+';
		}
		else if (score < 65) {
			flag = '-';
		}
	} else if (score >= 50) {
		grade = 'E';
		if (score > 55) {
			flag = '+';
		}
		else if (score < 55) {
			flag = '-';
		}
	} else if (score >= 40) {
		grade = 'F';
		if (score > 45) {
			flag = '+';
		}
		else if (score < 45) {
			flag = '-';
		}
	} else {
		printf("아무것도 입력하지 않았습니다.");
	}
	printf("학점은 %c%c 입니다", grade, flag);

	return;
}