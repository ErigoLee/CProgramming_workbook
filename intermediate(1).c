#include <stdio.h>

int main(void)
{
  char str[50]="Multi Campus.", tmp[50];
  char *from, *to;

  from = str;//str 주소 저장
  to = tmp;//tmp 주소 저장
  
  while(*from!='\0')
  {
    *to = *from;
    from++;
    to++;
  }
  *to = '\0'; //null 문자 추가

  printf("str: %s, tmp: %s \n", str, tmp);
  return 0;
}
