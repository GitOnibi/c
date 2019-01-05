#include<stdio.h>

void main() {

	int month = 0;
	char season[20] = " ";
	
	printf("1 ~ 12 월을 입력하세요\n");
	scanf("%d", &month);

	switch (month) {
		case 1 :
			printf("%d월은 겨울입니다", month);
			break;
		case 2:
			printf("%d월은 겨울입니다", month);
			break;
		case 3:
			printf("%d월은 봄입니다", month);
			break;
		case 4:
			printf("%d월은 봄입니다", month);
			break;
		case 5:
			printf("%d월은 봄입니다", month);
			break;
		case 6:
			printf("%d월은 여름입니다", month);
			break;
		case 7:
			printf("%d월은 여름입니다", month);
			break;
		case 8:
			printf("%d월은 여름입니다", month);
			break;
		case 9:
			printf("%d월은 가을입니다", month);
			break;
		case 10:
			printf("%d월은 가을입니다", month);
			break;
		case 11:
			printf("%d월은 가을입니다", month);
			break;
		case 12:
			printf("%d월은 겨울입니다", month);
			break;
		default:
			printf("잘못된 입력입니다.");
			break;
	}

	return;
}