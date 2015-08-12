#include <stdio.h>
#include <string.h>
#define MAX_LNSIZE 16

typedef struct _PHONE_BOOK_ENTRY {
	char LastName[MAX_LNSIZE];
	struct _PHONE_BOOK_ENTRY *pNext;
	struct _PHONE_BOOK_DETAIL *PhoneDetail;
} PhoneBook;

typedef struct _PHONE_BOOK_DETAIL {
	char FirstName[16];
	char email[16];
	char phone[10];
	char cell[10];
	char addr1[16];
	char addr2[16];
	char city[16];
	char state[2];
	char zip[5];
} PhoneDetail;

typedef struct _PHONE_BOOK_ORIGIN {
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
	struct _PHONE_BOOK_ORIGIN *pONext;
} PhoneOrigin;

void sizePrint()
{
	printf("The PhoneBook size Before : %lu\n",sizeof(PhoneOrigin));
	printf("The PhoneBook size After : %lu\n",sizeof(PhoneBook));
	printf("phead size : %lu\n",sizeof(PhoneBook *));
	
}

PhoneBook *FindName(char Last[] , PhoneBook *pHead)
{
	while (pHead !=NULL)
	{
		if(strcasecmp(Last , pHead->LastName ) == 0)
			return pHead;
		pHead = pHead->pNext;
	}
	return NULL;
}

/*
void InsertData(char name[16])
{
	PhoneBook *temp;
	strcpy(temp->LastName,name);
	temp->pNext=start;
	start=temp;
}
*/
