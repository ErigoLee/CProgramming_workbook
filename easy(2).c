#include <stdio.h>
//easy(1) solution
void game();
int money=15000;
int main()
{

  game();
  printf("남은금액: %d \n",money);

  game();
  printf("남은금액: %d \n",money);

  return 0;
}
void game()
{
  printf("1시간 이용료 3000원 지출. \n");
  money -=3000;
}
