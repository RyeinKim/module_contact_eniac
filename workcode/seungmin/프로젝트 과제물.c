#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NUM 100

void main()
{
	int num1 = 0;//����
	char name[MAX_NUM] = { 0, };//�̸� ����
	char phone = 0;//��ȭ��ȣ ����

	while (1) {
		printf("1. Add name & Phone number    2. View\n");
		scanf_s("%d", &num1);

		switch (num1)
		{
		case 1:
		{
			printf("�̸��� �Է����ּ��� : ");
			scanf("%s", name);
			printf("��ȭ��ȣ�� �Է����ּ��� : ");
			scanf("%s", phone);

			FILE* fp = fopen("Name.txt", "a");
			fprintf(fp, "%s %d\n", name, phone);
			fclose(fp);


			break;
		}
		case 2:
		{
			FILE* fp = fopen("Name.txt", "r"); 


			while (feof(fp) == 0)    // ���� �����Ͱ� ������ ���� �ƴ� �� ��� �ݺ�
			{
				fread(name+phone, sizeof(char), 1, fp);//������ ������ ����
				printf("%s", name+phone);//����ϱ�
			}
			fclose(fp);
			break;
		default:
			break;
		}
		}
	}
}