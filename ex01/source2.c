#include <stdio.h>

void main() {

	int money;
	int man,
		ochun,
		chun,
		oback,
		back,
		osib,
		sib;

	printf("�ݾ��� �Է��ϼ���\n");
	scanf("%i", &money);

	man = money / 10000;
	money -= man * 10000;

	ochun = money / 5000;
	money -= ochun * 5000;

	chun = money / 1000;
	money -= chun * 1000;

	oback = money / 500;
	money -= oback * 500;

	back = money / 100;
	money -= back * 100;

	osib = money / 50;
	money -= osib * 50;

	sib = money / 10;
	money -= sib * 10;

	printf("1������ %d��\n5õ���� %d��\n1õ���� %d��\n5����� %d��\n1����� %d��\n5�ʿ��� %d��\n1�ʿ��� %d��", man, ochun, chun, oback, back, osib, sib);

	return;
}