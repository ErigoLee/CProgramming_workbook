#include <stdio.h>

void func1(char *tmp);

int main(void)
{
  char msg[30]="C Progarmming."; //지역배열

  func1(msg);
  printf("msg: %s \n", msg);

  return 0;
}

void func1(char *tmp)
{
  while(*tmp)
  {
    if(*tmp>=65 && *tmp<=90)
      *tmp +=32;
    tmp++;
  }
}
/*
compiler :  c programming
exactly, translate
C Programming -> c programming
65<= n  <=90
n is in a capital. (capital example-> A,B,C....)
n + 32 is in a small letter, (small letter example-> a,b,c....)
*/
