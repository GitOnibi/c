#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// 선언부
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

// 구현부
int input() {
	int score;
	printf("성적을 입력하세요\n");
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
	printf("국어: %d\n영어: %d\n수학: %d\n총점: %d\n평균: %d\n", kor, eng, mat, sum, avg);
}