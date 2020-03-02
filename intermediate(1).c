#include <stdio.h>

int salFunc(int *sal, int size);

int main()
{
  //지역배열
  int Salary[]={3500000, 2700000, 2900000, 3600000, 1900000, 4300000};
  int salTot, size, i;

  size = sizeof(Salary)/sizeof(int); //열수계산

  salTot = salFunc(Salary, size); //함수호출

  printf("월급 리스트 \n");
  for(i=0;i<size;i++)
    printf("%d, ", Salary[i]);
  printf("\n월급평균: %d \n",salTot/size);
  return 0;
}

int salFunc(int *sal, int size) //함수구현(월급을 출력하고 합을 구하여 반환)
{
  int i, sum=0;

  for(i=0;i<size;i++)
    sum += *sal++;
  
  return sum;
}
