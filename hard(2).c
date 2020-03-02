#include <stdio.h>

int main()
{
  double d1, d2, d3, result;

  d1 = 1.36e-5;
  d2 = 3.72e-6;
  d3 = 5.124e+7;

  result = d1*d2/d3;

  printf("다항식의 결과 : %.30lf \n", result);
  printf("다항식의 결과 : %e \n",result);

  return 0;
}
