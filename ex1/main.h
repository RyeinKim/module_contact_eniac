#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#ifndef CONTACT_DATA
#define CONTACT_DATA

typedef struct _CONTACT_DATA {
	char name[20];
	char pnum[30];
	char address[1024];
	int menu;
} C_DATA;

void filesave(C_DATA *data);
void fileload();
void inputinfo();
void filesearch();
void filemodify();

#endif