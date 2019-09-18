#include "mainfunc.h"

void filesave(C_DATA *data)
{
	FILE *fp = fopen("contact.dll", "a");
	fprintf(fp, "Name:\t%s\nH.P:\t%s\nAddress:\t%s\n", data->name, data->pnum, data->address);
	fprintf(fp, "=========================\n");
	fclose(fp);
}

void fileload()
{
	char strTemp[255];
	char *pStr;

	FILE *fp = fopen("contact.dll", "r");
	if (fp != NULL)
	{
		while (!feof(fp))
		{
			pStr = fgets(strTemp, sizeof(strTemp), fp);
			printf("%s", strTemp);
		}
		fclose(fp);
	}
	else {}
}