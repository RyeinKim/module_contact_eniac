#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20192785 ¾Èº´¿ì
void main()
{
	int num = 0;
	char name[100] = { 0, }, phone[100] = { 0, }, *load, *Load;

	while (1)
	{
		printf("1. Add, 2. View, 3. Quit\n");
		scanf("%d", &num);

		if (num == 3)
		{
			printf("Program off\n");
			break;
		}

		switch (num)
		{

		case 1:
		{
			printf("N : ");
			scanf("%s", name);
			printf("P : ");
			scanf("%s", &phone);

			FILE *fp = fopen("my name.txt", "a");
			fprintf(fp, "%s %s", name, phone);
			fclose(fp);
			break;
		}
		case 2:
		{
			FILE *fp = fopen("my name.txt", "r");
			if (fp != NULL)
			{
				while (!feof(fp))
				{
					load = fgets(name, sizeof(name), fp);
					printf("%s\n", name);
					Load = fgets(phone, sizeof(phone), fp);
					printf("%s\n", phone);
				}
				fclose(fp);
			}
			break;
		}
		}
	}
}