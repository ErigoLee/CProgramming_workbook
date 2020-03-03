#include <stdio.h>
#include <stdlib.h>

int main()
{
	char asc = 48;
	FILE* fp;

	fp = fopen("초급1.txt","wt");
	if (fp == NULL)
	{
		printf("Open Error\n");
		exit(0);
	}
	while (asc <= 57)
	{
		fputc(asc, fp);
		asc++;
	}

	fclose(fp);
	
	printf("초급1.txt 파일저장. \n");

	return 0;
}
/*
Tell me about the result of this code!
answer:
When this code runs, this code made one file,초급1.txt.
The content of the file is "0123456789".
*/
