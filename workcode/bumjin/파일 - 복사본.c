#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>    
#include <string.h>
int main()
{
	char* name[50];
	char* address[100];
	char* number[50];
	int select;
	char read[127] = { 0, };

	while (1)
	{
		printf("1. 새 연락처 등록\n2. 내 전화 번호부 보기\n");
		printf("입력 = ");
		scanf("%d", &select);


		if (select == 1) {
			FILE* fp = fopen("name.txt", "a");

			printf("이름을 입력해주세요 = ");
			scanf("%s", &name);
			printf("주소를 입력해주세요 = ");
			scanf("%s", &address);
			printf("번호를 입력해주세요 = ");
			scanf("%s", &number);

			fputs("이름 : ", fp);
			fwrite(name, strlen(name), 1, fp);
			fputs("\n", fp);
			fputs("주소 : ", fp);
			fwrite(address, strlen(address), 1, fp);
			fputs("\n", fp);
			fputs("전화번호 : ", fp);
			fwrite(number, strlen(number), 1, fp);
			fputs("\n\n", fp);

			fclose(fp);
		}

		if (select == 2) {
			FILE* fp = fopen("name.txt", "r");
			while (feof(fp) == 0) {
				fread(read, sizeof(char), 1, fp); 

				printf("%s", read);

			}
			fclose(fp);

		}
		if (select != 1, 2)
			return 0;
	}
}