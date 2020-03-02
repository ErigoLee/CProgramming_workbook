#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x, y;
void DiceGame();

int main()
{
  int xResult=0, yResult=0, i;
  srand(time(NULL)); //난수초기화
  for(i=1;i<=5;i++)
  {
    DiceGame(); //게임호출
    xResult+=x;
    yResult+=y;
  }

  printf("x 누적: %d, y 누적: %d \n",xResult,yResult); //누적값 출력
  if(xResult>yResult)
    printf("X 사용자 승. \n");
  else if(xResult<yResult)
    printf("Y 사용자 승. \n");
  else
    printf("X, Y 사용자 동점. \n");
  printf("\n");

  return 0;
}

void DiceGame()
{
  x = rand() % 6 + 1;
  y = rand() % 6 + 1;
  printf("x: %d, y: %d\n",x,y);
}
