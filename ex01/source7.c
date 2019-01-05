#include<stdio.h>

void main() {

	int score = 0;
	char grade = ' ';

	printf("점수를 입력하세요\n");
	scanf("%d", &score);

	switch (score / 10) {
	case 10:
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	case 5:
		grade = 'E';
		break;
	case 4:
		grade = 'F';
		break;
	default:
		printf("올바른 값을 입력해 주세요");
	}
	printf("학점은 %c 입니다", grade);
	return;
}