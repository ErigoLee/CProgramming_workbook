#include <stdio.h>

int main()
{
  char inputChar, Cn=0;
  while(1)
  {
    printf("한 문자 입력? ");
    inputChar = getchar(); //문자입력
    while(getchar()!='\n'); //enter값 버리기

    if(inputChar=='q')
      break;
    if(inputChar>=65&&inputChar<=90)
      Cn++;
  }
  printf("입력된 대문자 수: %d \n",Cn);
  return 0;
}
