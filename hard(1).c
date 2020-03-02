#include <stdio.h>

int main()
{
  int choice, N, Sum=0, i;
  printf("1. 1부터 N 까지의 합 \n");
  printf("2. 1부터 N 까지의 홀수의 합 \n");
  printf("3. 1부터 N 까지의 짝수의 합 \n");
  printf("Select? (1~3) ");
  scanf("%d",&choice);

  printf("N 값 입력? ");
  scanf("%d",&N);

  switch(choice)
  {
    case 1: for(i=0;i<=N;i++)
              Sum+=i;
            break;
    case 2: for(i=1;i<=N;i=i+2)
              Sum+=i;
            break;
    case 3: for(i=0;i<=N;i=i+2)
              Sum+=i;
            break;
  }

  printf("1 부터 %d 까지 %s 합: %d \n",N,choice==1? " ":choice==2?"홀수":"짝수",Sum);
  return 0;
}
