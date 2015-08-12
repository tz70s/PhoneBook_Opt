#include <stdio.h>
#include <stdlib.h>

void sizePrint();

int main(void)
{
	sizePrint();
	printf("pointer size in my comp : %lu\n",sizeof(char *));
	return 0;
}
