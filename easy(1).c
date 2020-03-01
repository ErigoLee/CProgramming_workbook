#include <stdio.h>

int main()
{
  double dnum, *dp;
  
  dp=&dnum;
  
  *dp = 1.5;
  dnum += 1.5;
  
  printf("dnum: %lf, *dp: %lf \n", dnum, *dp);
  return 0;
}
