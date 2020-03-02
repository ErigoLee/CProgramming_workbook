#include <stdio.h>

int main()
{
  int qty, cost, result;

  printf("판매수량? ");
  scanf("%d", &qty);

  printf("단가? ");
  scanf("%d", &cost);

  if(qty*cost>1000000)
    result = (qty*cost)*0.95;
  else
    result = qty*cost;
  
  printf("판매금액: %d \n",result);

  return 0;
}
