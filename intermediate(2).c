#include <stdio.h>

void salaryFunc(int salary);

int main()
{
  int kimSalary=1000, leeSalary=1500, hanSalary=2000, parkSalary=2500, ukSalary=3000;

  salaryFunc(kimSalary);
  salaryFunc(leeSalary);
  salaryFunc(hanSalary);
  salaryFunc(parkSalary);
  salaryFunc(ukSalary);

  return 0;
}
void salaryFunc(int salary)
{
  static int count=0, sum=0;//변수선언

  //누적
  count++;
  sum+=salary;
  
  printf("직원 Count: %d, 월급: %d, 월급 평균: %.2f \n",count,salary,(float)sum/count);//출력
}
