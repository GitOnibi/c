#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() {

	const char *sub[3] = {"국어", "영어", "수학"};
	char name[3][10];
	int score[3][4];
	int i, j, total = 0;
	int rank[3] = { 0, 1, 2 }, tmp;
	// 3 명의 학생 이름과 국어 영어 수학 성적입력하여 1~3등과 성적의 평균을 저장하고 출력하시오

	for (i = 0; i < 3; i++) {
		printf("이름\t:");
		scanf("%s", &name);
		for (j = 0; j < 3; j++) {
			printf("%s\t:", sub[j]);
			scanf("%d", &score[i]);
		}
	}
	return;
}