#include <stdio.h>
#include <string.h>

void stringToken(char* sour, char sep); //함수원형

int main(void)
{
	char str[50] = "Unix Windows2000 Java C/C++ VB.Net";

	stringToken(str, 32); //함수호출

	return 0;
}
void stringToken(char* sour, char sep) //함구구현
{
	char tmp[50] = "", * dest;

	dest = tmp;
	printf("stringToken() 문자열 토큰 구분하기 \n");
	while (*sour)
	{
		if (*sour == sep) {
			printf("%s \n", tmp);
			int size = sizeof(tmp);
			dest = tmp;
			for (int i = 0; i < size; i++)
				* dest++ = '\0';
			dest = tmp;
			sour++;
		}
		else
			*dest++ = *sour++;
	}
}
/*
26~27 replace
for(int i=0;i<size;i++)
        tmp[i]='\0';

*/
