#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>    
#include <string.h>
int main()
{
	char* name[50];
	char* address[100];
	char* number[50];
	int select;
	char read[127] = { 0, };

	while (1)
	{
		printf("1. �� ����ó ���\n2. �� ��ȭ ��ȣ�� ����\n");
		printf("�Է� = ");
		scanf("%d", &select);


		if (select == 1) {
			FILE* fp = fopen("name.txt", "a");

			printf("�̸��� �Է����ּ��� = ");
			scanf("%s", &name);
			printf("�ּҸ� �Է����ּ��� = ");
			scanf("%s", &address);
			printf("��ȣ�� �Է����ּ��� = ");
			scanf("%s", &number);

			fputs("�̸� : ", fp);
			fwrite(name, strlen(name), 1, fp);
			fputs("\n", fp);
			fputs("�ּ� : ", fp);
			fwrite(address, strlen(address), 1, fp);
			fputs("\n", fp);
			fputs("��ȭ��ȣ : ", fp);
			fwrite(number, strlen(number), 1, fp);
			fputs("\n\n", fp);

			fclose(fp);
		}

		if (select == 2) {
			FILE* fp = fopen("name.txt", "r");
			while (feof(fp) == 0) {
				fread(read, sizeof(char), 1, fp); 

				printf("%s", read);

			}
			fclose(fp);

		}
		if (select != 1, 2)
			return 0;
	}
}