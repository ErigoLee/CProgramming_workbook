#include <stdio.h>

int main()
{
  char msg[100] = "Hello World!!";
  char *ptr; //포인터 변수 선언

  printf("msg : %s \n", msg);

  ptr = msg; //  포인터 변수에 msg 배열주소 저장

  while(*ptr!='\0') //문자열 반복 조건(참이면 반복)
  {
    printf("%c ",*ptr);
    ptr=++ptr;
  }
  printf("\n");

  return 0;
}
