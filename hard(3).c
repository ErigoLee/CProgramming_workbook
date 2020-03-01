#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[50]="Unix Windows2000 Java C/C++ VB.Net", word[10][20];
  char *sour, *dest, tmp[50]="";
  int Cn = 0,i;
  sour = str;
  dest = tmp;

  printf("문자열 토큰 구분하기 \n");
  while(*sour)
  {
    if (*sour == 32)
		{
      dest = tmp;
			int num = strlen(tmp);
			for (int j = 0; j < num; j++) {
				word[Cn][j] = *dest++;
				i = j;
			}
			word[Cn][i + 1] = '\0';
      dest = tmp;
      for (int j = 0; j < num; j++)
        * dest++ = '\0';
			dest = tmp;
			sour++;
      Cn++;
		}
		else
		{
			*dest++ = *sour++;
		}
  }
  printf("str: %s \n", str);
  printf("\n단어로 구분된 word 배열 \n");
  for(int j=0;j<Cn;j++)
    printf("%s \n",word[j]);
  return 0;
}
