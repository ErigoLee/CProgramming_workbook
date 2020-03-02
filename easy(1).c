#include <stdio.h>
void game();

int main()
{
  int money=15000;

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
/*
What is the result of the program?
By any chance, if there is a error,explain a error!
my answer:
The local variable,money variable,of the main function differs with the local variable of the game function.
So, You don't have a wanted result.
Also, The local variable,money variable,of the game function didn't declare.
As a result, The program got the error.
*/
