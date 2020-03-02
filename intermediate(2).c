#include <stdio.h>

int main()
{
  int over_time, time_sudang=25000;
  int sudang;

  printf("잔업시간? ");
  scanf("%d",&over_time);

  sudang = over_time*time_sudang;
  printf("잔업수당: %d \n",sudang);

  return 0;
}
