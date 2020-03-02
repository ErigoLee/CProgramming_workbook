#include <stdio.h> 

int main()
{
  int Num, i, oddSum=0, evenSum=0;

  printf("정수 입력? ");
  scanf("%d",&Num);

  //반복문에서 홀수/짝수 합 구하기
  for(i=0;i<=Num;i=i+2)
    evenSum+=i;
  for(i=1;i<=Num;i=i+2)
    oddSum+=i;
  printf("1 부터 %d 까지의 홀수의 합: %d \n",Num,oddSum);
  printf("1 부터 %d 까지의 짝수의 합: %d \n",Num,evenSum);

  return 0;
}
