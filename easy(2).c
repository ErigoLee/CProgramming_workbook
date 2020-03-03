#include <stdio.h>

int main()
{
  int score[4][5] ={
              {78, 90, 34, 46, 80},
              {98, 74, 84, 76, 72},
              {76, 48, 34, 72, 89},
              {61, 91, 67, 88, 83}};
  
  int i, j, sum=0, row, col;

  row = sizeof(score)/sizeof(score[0]); //행 크기
  col = sizeof(score[0])/sizeof(int);   //열 크기

  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      //데이터 출력과 누적
      sum+=score[i][j];
      printf("%d, ",score[i][j]);
    }
    printf("=> %.2f \n",(float)sum/col);
    sum=0;
  }

  return 0;
}
