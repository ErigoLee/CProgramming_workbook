#include <stdio.h>

void numCopy(int *X, int *Y, int size);

int main(int argc,char**argv) //표준
{
  int X[10] = {10,20,30,40,50,60,70,80,90,100}, Y[10]={0};
  int i, size;
  
  size = sizeof(X)/sizeof(int); //열 수 계산
  numCopy(X, Y, size);
  printf("X 배열 리스트 \n");
  for(i=0;i<size;i++)
    printf("%3d, ",X[i]);
  
  printf("\nY 배열 리스트 \n");
  for(i=0;i<size;i++)
    printf("%3d, ",Y[i]);
  printf("\n");

  return 0;
}

void numCopy(int *X, int *Y, int size)
{
  int i;
  for(i=0;i<size;i++)
    *Y++ = *X++;
}
