#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[50]="Multi Campus.";
  char *ptr;

  printf("str: %s \n",str);

  printf("str 역순: ");
  ptr = &str[strlen(str)];//출력한 시작주소 저장
  while(*ptr!=str[0]) //반복할 
  {
    printf("%c ",*(--ptr));
  }
  printf("\n");
  return 0;
}
