#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>    
#include <string.h>
int main()
{
	while (1) {
		char* name[100] = { 0, };
		int num;
		printf("1�� ���� 2�� �������� = ");
		scanf("%d", &num);


		if (num == 1) {

			FILE* fp = fopen("name.txt", "a");

			printf("�̸��� �Է����ּ��� = ");
			scanf("%s", &name);

			fputs("�̸� : ", fp);
			fwrite(name, strlen(name), 1, fp);
			fputs("\n", fp);
			fclose(fp);
			printf("\n");
		}
		if (num == 2) {
			FILE* fp = fopen("name.txt", "r");

			while (feof(fp) == 0) {

				fread(name, sizeof(char), 1, fp);
				printf("%s", name);
			}
			fclose(fp);
			printf("\n");
		}
	}
}