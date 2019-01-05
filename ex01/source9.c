#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {

	int input	= 0,
		i		= 0,
		sum		= 0,
		even	= 0,
		odd		= 0;
	printf("숫자를 입력하세요\n");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		sum += i;
		if ( (i % 2) == 1 ) {
			odd += i;
		} else if( (i % 2) == 0 ) {
			even += i;
		} else {
			printf("올바른 입력이 아닙니다\n");
			return;
		}
	}
	printf("입력: %d\n총합: %d\n홀수합: %d\n짝수합: %d\n", input, sum, odd, even);
	
	return;
}