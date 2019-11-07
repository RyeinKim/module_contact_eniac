#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20192785 안병우
void main()
{
	int num = 0;
	char name[10] = { 0, }, adress[100] = { 0, }, phone[25] = { 0, };

	while (1)
	{
		printf("1번 이름 입력, 2번 번호 입력, 3번 주소 입력, 4번 불러오기, 5번 종료\n");
		scanf("%d", &num);

		if (num == 5)
		{
			printf("\n전화번호부를 종료 합니다.\n\n");
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