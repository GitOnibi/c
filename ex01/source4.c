#include<stdio.h>

void main() {

	int a, b;

	printf("두가지 숫자를 입력하세요\n");
	scanf("%d%d", &a, &b);
	if(a < b) {
		printf("%d가 %d 보다 작습니다.", a, b);
	}
	else if (a > b) {
		printf("%d가 %d 보다 큽니다.", a, b);
	}
	else {
		printf("%d는 %d와 같습니다.", a, b);
	}

}