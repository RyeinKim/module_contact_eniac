#include "main.h"

void filesave(C_DATA *data)
{
	FILE *fp = fopen("contact.dll", "a");
	fprintf(fp, "%s %s %s\n", data->name, data->pnum, data->address);
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

void filemodify()
{
	int count = 0;
	char type[20], chname[30], chpnum[30], chaddress[1024];

	C_DATA data2[200];
	FILE *fp = fopen("contact.dll", "r");
	FILE *fp2 = fopen("contact_ex.dat", "a");
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

			printf("input new name: ");
			scanf("%s", chname);
			strcpy(data2[i].name, chname);
			
			printf("input new H.P: ");
			scanf("%s", chpnum);
			strcpy(data2[i].pnum, chpnum);

			printf("input new address: ");
			scanf("%[^\n]", chaddress);
			strcpy(data2[i].pnum, chpnum);
		}
	}
	for (int i = 0; i <= count; i++)
	{
		fprintf(fp2, "%s %s %s\n", data2[i].name, data2[i].pnum, data2[i].address);
	}
	fclose(fp);
	fclose(fp2);
	remove("contact.dll");
	rename("contact_ex.dat", "contact.dll");
}