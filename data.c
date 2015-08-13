#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init()
{
	srand(time(NULL));
}

char *randData()
{
	char *LastName;
	LastName = (char*) malloc(16*sizeof(char));
	int count;
	for(count = 0; count<16;count++)
	{
		LastName[count] = 'a'+(random()%26);
	}
	//printf("%s\n",LastName);
	return LastName;
}
