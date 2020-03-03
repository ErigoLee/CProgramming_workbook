#include <stdio.h>

#define ST_SIZE 5

int main(void) {

  int score[ST_SIZE];
  int i, sum=0;

  for(i=0;i<ST_SIZE;i++)
  {
    //입력 및 누적
    printf("%d, 점수? ",i+1);
    scanf("%d",&score[i]);
    sum+=score[i];
  }

  printf("\n배열점수 : ");
  for(i=0;i<ST_SIZE;i++)
    printf("%d, ",score[i]);
  printf("\n성적평균: %.2f\n",(float)sum/ST_SIZE);

  return 0; 
}
