#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct vision {
	double left;
	double right;
};

struct vision swap(struct vision t);


int main(void) {
	struct vision target;
	printf("왼쪽 시력 입력\n");
	scanf("%f", &target.left);
	printf("오른쪽 시력 입력\n");
	scanf("%f", &target.right);
	printf("변경 전 / left : %1f / right : %1f\n", target.left, target.right);
	target = swap(target);
	printf("변경 후 / left : %1f / right : %1f\n", target.left, target.right);
	return;
}

struct vision swap(struct vision t) {
	double temp;
	temp	= t.right;
	t.right	= t.left;
	t.left	= temp;
	return t;
}