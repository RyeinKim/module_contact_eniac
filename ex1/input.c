#include "input.h"

C_DATA data1;

void inputinfo()
{
	getchar();
	printf("Name: ");
	scanf("%[^\n]s", data1.name);

	printf("H.P: ");
	scanf("%s", data1.pnum);
	getchar();

	printf("Address: ");
	scanf("%[^\n]s", data1.address);

	filesave(data1.name, data1.pnum, data1.address);
}