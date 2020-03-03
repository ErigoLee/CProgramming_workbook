#include <stdio.h>

#define STUDENT 4
#define SUBJECT 5

void heading();

int main()
{
  char names[STUDENT+1][20]={"홍길동","성춘향","진달래","개나리","한송이"};
  int score[STUDENT][SUBJECT+2]={ {78,90,34,46,80},
                                  {98,74,84,76,72},
                                  {76,48,34,72,89},
                                  {61,91,67,88,83}};
  
  int i, j, sum=0, row, col;

  row = sizeof(score)/sizeof(score[0]); //행수
  col = sizeof(score[0])/sizeof(int);

  for(i=0;i<row;i++)
  {
    for(j=0;j<col-2;j++)
      sum+=score[i][j];  //점수 합

    score[i][SUBJECT] = sum;
    score[i][SUBJECT+1] = sum/SUBJECT; //점수 평균
    sum=0;
  }
  heading();
  for(i=0;i<row;i++)
  {
    printf("%5s, ",names[i]);
    for(j=0;j<col;j++)
      printf("%3d, ",score[i][j]);
    printf("\n");
  }

  return 0;
}


void heading()
{
  printf("===============================================\n");
  printf("성명    국어 영어 수학 과학 사회 총점 평균 \n");
  printf("===============================================\n");
}
