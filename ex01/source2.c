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

	printf("금액을 입력하세요\n");
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

	printf("1만원권 %d장\n5천원권 %d장\n1천원권 %d장\n5백원권 %d개\n1백원권 %d개\n5십원권 %d개\n1십원권 %d개", man, ochun, chun, oback, back, osib, sib);

	return;
}