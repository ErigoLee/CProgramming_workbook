#include <stdio.h>

double salCalc(int sal);

int main()
{
  int salary = 2500000;
  double result;

  result = salCalc(salary);
  printf("월급: %d 의 5%% 성과급: %.2lf \n",salary,result);

  return 0;
}

double salCalc(int sal)
{
  return sal*0.05;
}
/*
output outcome
월급: 2500000 의 5% 성과급: 125000.00
*/
