#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char star[50]="", percent[50]="", sharp[50]="";
  int s1=0, p=0,s2=0,i,randNum;
  srand(time(NULL));

  for(i=1;i<=50;i++)
  {
    randNum = rand()%3;

    switch(randNum) //난수값에 의해 배열에 문자 저장
    {
      case 0: star[s1++]='*';
        break;
      case 1: percent[p++]='%';
        break;
      case 2: sharp[s2++]='#';
        break;
    } 
  }

  printf("star    : %s, count: %d, \n",star,s1);
  printf("percent : %s, count: %d, \n",percent,p);
  printf("sharp   : %s, count: %d, \n",sharp,s2);

  return 0;
}
