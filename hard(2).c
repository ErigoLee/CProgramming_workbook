#include <stdio.h>

int main()
{
  int choice, N, Sum=0, i;

  while(1){
    printf("\n1. 1부터 N 까지의 합 \n");
    printf("2. 1부터 N 까지의 홀수의 합 \n");
    printf("3. 1부터 N 까지의 짝수의 합 \n");
    printf("4. 프로그램 종료 \n");
    printf("Select? (1~4) ");
    scanf("%d",&choice);

    if(choice<1||choice>4)
      continue;

    if(choice==4)
      break;

    printf("N 값 입력? ");
    scanf("%d",&N);

    switch(choice)
    {
      //각 메뉴에 해당되는 계산 루틴
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

    printf("\n1 부터 %d 까지 %s 합: %d \n",N,choice==1? " ":choice==2?"홀수":"짝수",Sum);
    Sum=0;//새로운 누적을 위한 초기화
  }
  printf("End. \n");
  return 0;
}
