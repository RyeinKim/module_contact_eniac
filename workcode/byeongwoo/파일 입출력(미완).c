#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20192785 �Ⱥ���
void main()
{
	int num = 0;
	char name[10] = { 0, }, adress[100] = { 0, }, phone[25] = { 0, };

	while (1)
	{
		printf("1�� �̸� �Է�, 2�� ��ȣ �Է�, 3�� �ּ� �Է�, 4�� �ҷ�����, 5�� ����\n");
		scanf("%d", &num);

		if (num == 5)
		{
			printf("\n��ȭ��ȣ�θ� ���� �մϴ�.\n\n");
			break;
		}

		switch (num)
		{
			case 1:
			{
				scanf("%s", name);
				FILE *fp = fopen("call book.txt", "a");
				fprintf(fp, " %s", name);
				fclose(fp);
				break;
			}
			case 2:
			{
				scanf("%s", phone);
				FILE *fp = fopen("call book.txt", "a");
				fprintf(fp, " %s", phone);
				fclose(fp);
				break;
			}
			case 3:
			{
				scanf("%s", adress);
				FILE *fp = fopen("call book.txt", "a");
				fprintf(fp, " %s", adress);
				fclose(fp);
				break;
			}
			case 4:
			{
				FILE *fp = fopen("call book.txt", "r");
				fscanf(fp, "%s %s %s", name, phone, adress);
				printf("%s\n %s\n %s %s %s %s %s\n\n", name, phone, adress, name, name, name, name);
				fclose(fp);
				break;
			}
		}
	}
}