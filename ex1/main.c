#include "mainfunc.h"

int main() 
{
	while (1)
	{
		int menu;
		printf("1. Add contact  2. View Contact  3. Search  4. Quit\n");
		scanf("%d", &menu);
		if (menu == 5) { break; }
		switch (menu)
		{
			case 1:
			{
				inputinfo();
				break;
			}
			case 2:
			{
				fileload();
				break;
			}
			case 3:
			{
				printf("�̸� �Է� : ");
				filesearch();
				break;
			}
			case 4:
			{
				filemodify();
			}
		}
	}		
	return 0;
}