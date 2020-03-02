#include <stdio.h>

int main()
{
  int n=4;

  switch(n)
  {
    case 1: n+=2;
      break;
    case 2: n*=2;
      break;
    case 3: n/=2;
      break;
  }
  printf("n : %d \n",n);
  return 0;
}
/*
output outcome
n: 4
*/
