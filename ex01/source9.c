#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {

	int input	= 0,
		i		= 0,
		sum		= 0,
		even	= 0,
		odd		= 0;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		sum += i;
		if ( (i % 2) == 1 ) {
			odd += i;
		} else if( (i % 2) == 0 ) {
			even += i;
		} else {
			printf("�ùٸ� �Է��� �ƴմϴ�\n");
			return;
		}
	}
	printf("�Է�: %d\n����: %d\nȦ����: %d\n¦����: %d\n", input, sum, odd, even);
	
	return;
}