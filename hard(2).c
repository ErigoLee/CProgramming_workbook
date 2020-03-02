#include <stdio.h>
void FuncA();
void FuncB();

int main()
{
  FuncA();
  printf("C ");
  printf("프로그래밍");
  FuncB();
  return 0;
}

void FuncA()
{
  printf("든든한 ");
}
void FuncB()
{
  printf(" !!! \n");
}
