#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num;
	char name[20];
	printf("1���� �̸��Է�\n2���� ���� �Է�\n������ �Է��ϼ��� = ");
	scanf("%d", &num);

	switch (num) {
		case 1: 
	{
		printf("�̸��� �Է��ϼ��� = ");
		scanf("%s", name);

		FILE* fp = fopen("named.txt", "w");
		fprintf(fp, "�̸� = %s", name);
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