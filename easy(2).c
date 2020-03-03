#include <stdio.h>
#include <stdlib.h>

int main()
{
	char inputChar;
	FILE* fp;

	fp = fopen("초급2.txt","rt");
	if (fp == NULL)
	{
		printf("Open Error\n");
		exit(0);
	}
	
	while ((inputChar=fgetc(fp))!= EOF)
	{
		printf("%c ",inputChar);
	}

	printf("\n");
	fclose(fp);

	return 0;
}
