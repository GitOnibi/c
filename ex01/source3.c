#include<stdio.h>

void main() {

	char c;

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%c", &c);
	(c >= 'A' && c <= 'Z') ? printf("%c �� �빮�� �̰�, %d��° �����Դϴ�.", c, c-64) :
		(c >= 'a' && c <= 'z') ? printf("%c �� �ҹ��� �̰�, %d��° �����Դϴ�.", c, c-96) :
		(c >= '0' && c <= '9') ? printf("%d �� ���� �Դϴ�.") :
		printf("�߸� �Է��ϼ̰ų� Ư������ �Դϴ�.");
	return;
}