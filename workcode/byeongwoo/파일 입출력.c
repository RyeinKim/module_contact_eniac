#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num = 0;
	char name[10] = { 0, };

	printf("1�� �̸� �Է�, 2�� �ҷ�����\n");
	scanf("%d", &num);

	if (num == 1)
	{
		scanf("%s", name);
		FILE *fp = fopen("my name.txt", "w");
		fprintf(fp, "%s", name);
		fclose(fp);
	}
	else if (num == 2)
	{
		FILE *fp = fopen("my name.txt", "r");
		fscanf(fp, "%s", name);
		printf("%s\n", name);
		fclose(fp);
	}
}