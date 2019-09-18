#include "input.h"

int main()
{
	while (1)
	{
		int menu;
		printf("1. Add contact  2. View Contact  3. Quit\n");
		scanf("%d", &menu);
		if (menu == 3) { break; }
		switch (menu)
		{
			case 1:
			{
				inputinfo();
			}
			case 2:
			{
				fileload();
			}
		}
	}		
	return 0;
}