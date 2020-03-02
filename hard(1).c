#include <stdio.h>

#define USD 1100 //달러
#define EUR 1350 //유로
#define GBP 1500 //파운드

int main()
{
  int money;

  printf("환전할 원화 금액? ");
  scanf("%d",&money);

  printf("\n달러 환전: %d \n",money/USD);
  printf("유로 환전: %d \n",money/EUR);
  printf("파운드 환전: %d \n",money/GBP);
  
  return 0;
}
