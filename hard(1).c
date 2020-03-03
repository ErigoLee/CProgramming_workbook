#include <stdio.h>

#define NUM_SZ 10
int main()
{
  int Num[NUM_SZ]={56, 900, -4, 120, 7, 90, -64, 209, 711, 10};
  int i, maxIndex, minIndex;

  maxIndex=minIndex=0;

  for(i=1;i<NUM_SZ;i++)
  {
    if(Num[maxIndex]<Num[i]) //최대값을 비교할 if
      maxIndex = i;
    if(Num[minIndex]>Num[i]) //최소값을 비교할 if
      minIndex = i;
  }

  printf("Num 배열 데이터 \n");
  for(i=0;i<NUM_SZ;i++)
    printf("%d, ",Num[i]);
  printf("\n\n");
  printf("큰 값이 저장된 위치: %d , max: %d \n",maxIndex,Num[maxIndex]);  //출력
  printf("작은 값이 저장된 위치: %d, min: %d \n",minIndex,Num[minIndex]); //출력

  return 0;
}
