#include <stdio.h>

#define dNumSZ 5

int main()
{
  //배열 선언
  double dNum[dNumSZ], tmp;
  int i, j;

  for(i=0;i<dNumSZ;i++)
  {
    printf("%d, 실수 입력? ",i+1);
    scanf("%lf",&dNum[i]); //배열 데이터 입력
  }

  printf("\n입력된 dNum 배열 값 \n");
  for(i=0;i<dNumSZ;i++)
    printf("%.2lf, ",dNum[i]);
  printf("\n");

  for(i=0;i<dNumSZ-1;i++)
  {
    //정렬알고리즘 구현 
    for(j=0;j<dNumSZ-1;j++)
    {
      if(dNum[j]<dNum[j+1])
      {
        tmp = dNum[j];
        dNum[j]=dNum[j+1];
        dNum[j+1]=tmp;
      }
    }
  }

  printf("\n내림차순으로 정렬된 dNum 배열 값 \n");
  for(i=0;i<dNumSZ;i++)
    printf("%.2lf, ",dNum[i]);
  printf("\n");

  return 0;
}
