
#include <stdio.h>

int main()
{
  int numCn=0, spaCn=0, alphaCn=0, i;
  char str[100];

  printf("문자열 입력? ");
  gets(str);//문자열 입력
  /*
  #include <string.h> need 
  I recommend the way!!
  fgets(str,sizeof(str),stdin);
  str[strlen(str)-1]='\0'; 
  */

  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>=48&&str[i]<=57)
      numCn++;
    else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
      alphaCn++;
    else
      spaCn++;
  }

  printf("숫자: %d, 알파벳: %d, 기타문자: %d \n",numCn,alphaCn,spaCn);

  return 0;
