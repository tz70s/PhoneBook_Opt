#include <stdio.h>
#define MAX_LNSIZE 16

typedef struct _PHONE_BOOK_ENTRY {
	char LastName[MAX_LNSIZE];
	struct _PHONE_BOOK_ENTRY *pNext;
	//struct _PHONE_BOOK_DETAIL *PhoneDetail;/*Pointing to Detail*/
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

PhoneOrigin *starto;