#include <stdio.h>

void binaryFunc(int bin);

int main()
{
  int num;

  printf("양의 정수 입력? ");
  scanf("%d", &num); //8입력

  binaryFunc(num);

  printf("\n");

  return 0;
}
void binaryFunc(int bin)
{
  if(bin)
  {
    binaryFunc(bin/2);
    printf("%d",bin%2);
  }
}
/*
output outcome
양의 정수 입력? 8
1000
*/
