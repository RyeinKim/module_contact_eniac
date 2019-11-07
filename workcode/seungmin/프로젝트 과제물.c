#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NUM 100

void main()
{
	int num1 = 0;//선택
	char name[MAX_NUM] = { 0, };//이름 저장
	char phone = 0;//전화번호 저장

	while (1) {
		printf("1. Add name & Phone number    2. View\n");
		scanf_s("%d", &num1);

		switch (num1)
		{
		case 1:
		{
			printf("이름을 입력해주세요 : ");
			scanf("%s", name);
			printf("전화번호를 입력해주세요 : ");
			scanf("%s", phone);

			FILE* fp = fopen("Name.txt", "a");
			fprintf(fp, "%s %d\n", name, phone);
			fclose(fp);


			break;
		}
		case 2:
		{
			FILE* fp = fopen("Name.txt", "r"); 


			while (feof(fp) == 0)    // 파일 포인터가 파일의 끝이 아닐 때 계속 반복
			{
				fread(name+phone, sizeof(char), 1, fp);//파일의 끝까지 가기
				printf("%s", name+phone);//출력하기
			}
			fclose(fp);
			break;
		default:
			break;
		}
		}
	}
}