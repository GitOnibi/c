#include<stdio.h>

void main() {

	int month = 0;
	char season[20] = " ";
	
	printf("1 ~ 12 ���� �Է��ϼ���\n");
	scanf("%d", &month);

	switch (month) {
		case 1 :
			printf("%d���� �ܿ��Դϴ�", month);
			break;
		case 2:
			printf("%d���� �ܿ��Դϴ�", month);
			break;
		case 3:
			printf("%d���� ���Դϴ�", month);
			break;
		case 4:
			printf("%d���� ���Դϴ�", month);
			break;
		case 5:
			printf("%d���� ���Դϴ�", month);
			break;
		case 6:
			printf("%d���� �����Դϴ�", month);
			break;
		case 7:
			printf("%d���� �����Դϴ�", month);
			break;
		case 8:
			printf("%d���� �����Դϴ�", month);
			break;
		case 9:
			printf("%d���� �����Դϴ�", month);
			break;
		case 10:
			printf("%d���� �����Դϴ�", month);
			break;
		case 11:
			printf("%d���� �����Դϴ�", month);
			break;
		case 12:
			printf("%d���� �ܿ��Դϴ�", month);
			break;
		default:
			printf("�߸��� �Է��Դϴ�.");
			break;
	}

	return;
}