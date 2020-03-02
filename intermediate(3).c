#include <stdio.h>

int main()
{
  int x=10, y=20, tmp=30;

  x++,++y;
  tmp += x+y++;

  printf("x: %d, y: %d, tmp: %d \n",x,y,tmp);
  
  return 0;
}
/*
compiler
x: 11, y: 22, tmp: 62
*/
