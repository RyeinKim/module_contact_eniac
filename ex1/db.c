#include "mainfunc.h"

void filesave(C_DATA *data)
{
	FILE *fp = fopen("contact.dll", "a");
	fprintf(fp, "%s %s %s\n", data->name, data->pnum, data->address);
	//fprintf(fp, "=========================\n");
	fclose(fp);
}

void fileload()
{
	char strTemp[255];
	char *pStr;
	int count = 0;

	C_DATA data2[200];
	FILE *fp = fopen("contact.dll", "r");
	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fscanf(fp, "%s %s %[^\n]\n", data2[count].name, data2[count].pnum, data2[count].address);
			printf("%s %s %s\n", data2[count].name, data2[count].pnum, data2[count].address);
			//fscanf(fp, "%s %s", data2[count].name, data2[count].pnum);
			//printf("%s %s\n", data2[count].name, data2[count].pnum);
			count++;
		}
	}
	else {}
	fclose(fp);
}

void inputinfo()
{
	C_DATA data1;
	getchar();
	printf("Name: ");
	scanf("%[^\n]s", data1.name);

	printf("H.P: ");
	scanf("%s", data1.pnum);
	getchar();

	printf("Address: ");
	scanf("%[^\n]", data1.address);

	filesave(data1.name, data1.pnum, data1.address);
}

void filesearch()
{
	int count = 0;
	char type[20];

	C_DATA data2[200];
	FILE *fp = fopen("contact.dll", "r");
	while (!feof(fp))
	{
		fscanf(fp, "%s %s %[^\n]", data2[count].name, data2[count].pnum, data2[count].address);
		count++;
	}
	scanf("%s", type);
	for (int i = 0; i < count; i++)
	{
		if (strcmp(data2[i].name, type) == 0)
		{
			printf("%s %s %s\n", data2[i].name, data2[i].pnum, data2[i].address);
		}
	}
}