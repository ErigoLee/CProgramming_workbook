#include <stdio.h>

int main()
{
  int x[]={10,20,30,40,50,60,70,80,90,100}, y[20], i, size;

  size = sizeof(x)/sizeof(int);

  for(i=0;i<size;i++)
    y[i]=x[size-i-1]; //X 배열원소 Y 배열에 역순으로 대입
  
  for(i=0;i<size;i++)
    printf("x:[%d]: %d, y:[%d]: %d \n",i,x[i],i,y[i]);

  return 0;
}
