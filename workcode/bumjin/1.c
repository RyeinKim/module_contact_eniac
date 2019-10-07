#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num;
	char name[20];
	printf("1번은 이름입력\n2번은 파일 입력\n숫자을 입략하세요 = ");
	scanf("%d", &num);

	switch (num) {
		case 1: 
	{
		printf("이름을 입략하세요 = ");
		scanf("%s", name);

		FILE* fp = fopen("named.txt", "w");
		fprintf(fp, "이름 = %s", name);
		fclose(fp);
		break;
	}
		case 2: 
	{
		FILE* fp = fopen("named.txt", "r");
		fscanf(fp,"%[^\n]",name);
		printf("%s", name);
		fclose(fp);
		break;
	}
	default:
		break;
	}
}