#include <stdio.h>
#include <stdlib.h>
#define MAX_LNSIZE 16

typedef struct PhoneBook *pPointer;
typedef struct PhoneBook{
	char LastName[MAX_LNSIZE];
	char FirstName[16];
	char email[16];
	char phone[10];
	char cell[10];
	char addr1[16];
	char addr2[16];
	char city[16];
	char state[2];
	char zip[5];
    pPointer pNext;
};

pPointer FindName(char Last[] , pPointer pHead)
{
	while (pHead !=NULL )
	{
		if(stricmp(Last , pHead->LastName ) == 0)
			return pHead;
		pHead = pHead->pNext;
	}
	return NULL;
}
