#include <stdio.h>
#include <stdlib.h>

float sizePrint(int);
void init();

int main(void)
{
	FILE *fp;
	fp = fopen("efTestStartm.txt","w");
	init();
	int b1;
	for(b1=10;b1<10000;b1++)
	{
		fprintf(fp,"%f\n",sizePrint(b1));
	}
	fclose(fp);
	printf("\n");	
	
	return 0;
}
