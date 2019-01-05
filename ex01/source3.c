#include<stdio.h>

void main() {

	char c;

	printf("문자를 입력하세요\n");
	scanf("%c", &c);
	(c >= 'A' && c <= 'Z') ? printf("%c 는 대문자 이고, %d번째 문자입니다.", c, c-64) :
		(c >= 'a' && c <= 'z') ? printf("%c 는 소문자 이고, %d번째 문자입니다.", c, c-96) :
		(c >= '0' && c <= '9') ? printf("%d 는 숫자 입니다.") :
		printf("잘못 입력하셨거나 특수문자 입니다.");
	return;
}