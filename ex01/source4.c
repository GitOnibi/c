#include<stdio.h>

void main() {

	int a, b;

	printf("�ΰ��� ���ڸ� �Է��ϼ���\n");
	scanf("%d%d", &a, &b);
	if(a < b) {
		printf("%d�� %d ���� �۽��ϴ�.", a, b);
	}
	else if (a > b) {
		printf("%d�� %d ���� Ů�ϴ�.", a, b);
	}
	else {
		printf("%d�� %d�� �����ϴ�.", a, b);
	}

}