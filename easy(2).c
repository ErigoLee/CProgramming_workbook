#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
  int true = 1;  //변수는 수정 가능
  int false = 0;

  printf("TRUE: %d, FALSE: %d \n",TRUE,FALSE);
  printf("true: %d, false: %d \n",true,false);
  true=2;
  false=3;
  printf("true: %d, false: %d \n",true,false);
  return 0;
}
/*
compiler
TRUE: 1, FALSE: 0
true: 1, false: 0
true: 2, false: 3
*/
