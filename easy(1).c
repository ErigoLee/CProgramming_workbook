#include <stdio.h>

int main()
{
  int hour, min=60, sec=60;
  
  printf("시간 입력? ");
  scanf("%d",&hour);
  
  printf("%d 시간은 %d분, %d초\n",hour,hour*min,hour*min*sec);
  
  return 0;
}
