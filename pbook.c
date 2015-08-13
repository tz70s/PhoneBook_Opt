#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pbook.h"

char *randData();
PhoneBook *start = NULL;

PhoneBook *FindName(char Last[])
{
	PhoneBook *pHead = (PhoneBook*)malloc(sizeof(PhoneBook));
	while (pHead !=NULL)
	{
		if(strcasecmp(Last , pHead->LastName ) == 0)
			return pHead;
		pHead = pHead->pNext;
	}
	return NULL;
}

void InsertData(char name[])
{
	PhoneBook *temp = NULL;
	temp = (PhoneBook*)malloc(sizeof(PhoneBook));
	strcpy(temp->LastName,name);
	temp->pNext = start;
	start = temp;
	//printf("%s\n",temp->LastName);
}

void Show()
{
	PhoneBook *temp = start;
	//printf("%s\n",temp->LastName);
	while(temp!=NULL)
	{
		printf("%s\n",temp->LastName);
		temp = temp->pNext;
	}
}

void find()
{
	PhoneBook *temp = FindName("John");
	printf("%s\n",temp->LastName);
}

void sizePrint()
{
	printf("The PhoneBook size Before : %lu\n",sizeof(PhoneOrigin));
	printf("The PhoneBook size After : %lu\n",sizeof(PhoneBook));
	init();
	int count;
	InsertData("John");
	for(count = 0;count<10;count++)
	{
		InsertData(randData());
	}
	
	Show();
	find();
}