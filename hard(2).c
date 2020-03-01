#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50] = "Unix Windows2000 Java C/C++ VB.Net";
	char* sour, * dest, tmp[50] = "";
	sour = str;
	dest = tmp;

	printf("문자열 토큰 구분하기 \n");
	while (*sour)
	{
		if (*sour == 32)
		{
			printf("%s \n", tmp);
			dest = tmp;
			int num = strlen(tmp);
			for (int i = 0; i < num; i++)
				* dest++ = '\0';
			dest = tmp;
			sour++;
		}
		else
		{
			*dest++ = *sour++;
		}
	}
	return 0;
}
