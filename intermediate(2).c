#include <stdio.h>

int main()
{
  int kor, eng, mat, sum=0, rank;
  float avg;

  printf("국어, 영어, 수힉 점수를 입력하세요? ");
  scanf("%d%d%d",&kor,&eng,&mat);

  sum = kor+eng+mat;
  avg = (float)sum/3;
  rank = avg >= 80 ? 1: avg >= 60 ? 2: 3;

  printf("총점: %d, 평균: %.2f, 등급: %d \n", sum, avg,rank);

  return 0;
}
