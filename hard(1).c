#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char msg[10][20];
	int i;

	printf("argc: %d \n", argc);

	for (i = 0; i < argc; i++)
		strcpy(msg[i],argv[i]);

	printf("명령어 라인 문자열이 저장된 msg 2차원 문자배열 \n");
	for (i = 0; i < argc; i++)
		printf("%s \n", msg[i]);

	return 0;
}
/*
명령어 라인 인수 input

*/
