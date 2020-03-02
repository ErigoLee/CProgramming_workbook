#include <stdio.h>

int main()
{
  int n1, n2,n3,min;

  printf("세 수를 입력하세요? ");
  scanf("%d%d%d", &n1,&n2,&n3);

  printf("입력된 값 n1: %d, n2: %d, n3: %d \n",n1,n2,n3);

  min = n1 > n2 ? n2 : n1;
    min = min > n3 ? n3: min;

  printf("세 수 중 가장 작은 값: %d\n", min);
  return 0;
}
