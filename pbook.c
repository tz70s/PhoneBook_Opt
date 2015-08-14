#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pbook.h"

char *randData();
PhoneBook *start = NULL;

PhoneBook *FindName(char Last[])
{
	PhoneBook *pHead = start;
	while (pHead !=NULL)
	{
		if(strcasecmp(Last , pHead->LastName ) == 0){
			//printf("\nfind!!\n%s\n",pHead->LastName);
			return pHead;
		}
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
	FindName("John");
	PhoneBook *temp = FindName("John");
	//printf("%s\n",temp->LastName);
}

void empty()
{
	PhoneBook *temp;
	while(start!=NULL)
	{
		temp = start;
		start = start->pNext;
		free(temp);
	}
}

float sizePrint(int bound)
{
	//printf("The PhoneBook size Before : %lu\n",sizeof(PhoneOrigin));
	//printf("The PhoneBook size After : %lu\n",sizeof(PhoneBook));
	init();
	int x,y;
	InsertData("John");
	for(x = 0;x<bound;x++)
	{
		InsertData(randData());
	}
	
	//Show();
	float startTime = 0 , endTime = 0;
	startTime = (float)clock()/CLOCKS_PER_SEC;
	find();
	endTime = (float)clock()/CLOCKS_PER_SEC;
	//printf("The split struct time \n%f\n",endTime-startTime);
	empty();
	return endTime-startTime;
}
