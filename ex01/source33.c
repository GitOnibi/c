#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// �����
int input();
int sum_(int kor, int eng, int mat);
int avg_(int sum);
void report(int kor, int eng, int mat, int avg, int sum);

void main() {

	int kor, eng, mat, avg, sum;

	kor = input();
	eng = input();
	mat = input();
	sum = sum_(kor, eng, mat);
	avg = avg_(sum);
	report(kor, eng, mat, avg, sum);
	return;
}

// ������
int input() {
	int score;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &score);
	return score;
}
int sum_(int a, int b, int c) {
	return a + b + c;
}
int avg_(int sum) {
	return sum / 3;
}
void report(int kor, int eng, int mat, int avg, int sum) {
	printf("����: %d\n����: %d\n����: %d\n����: %d\n���: %d\n", kor, eng, mat, sum, avg);
}