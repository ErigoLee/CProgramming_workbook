#include <stdio.h>

void Func1(int tmp[]);

int main()
{
  //지역배열 
  int num[5] = {100,200,300,400,500},i;
  Func1(num);
  return 0;
}

//void numInput(int *tmp)
void Func1(int tmp[]) //(recommend *tmp!!)
{
  int i;
  printf("tmp sizeof : %d \n", sizeof(tmp));
  for(i=0;i<5;i++)
    printf("%d, ",*(tmp+i));
  printf("\n");
}
/*
compiler
tmp sizeof: 4 (or 8)
because tmp points memory address.
32 bit => 4
64 bit => 8
100, 200, 300, 400, 500,
*/
