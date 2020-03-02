#include <stdio.h>

int main()
{
  //A area
  int i, sum=0;

  for(i=0;i<=5;i++)
    sum+=i;
  printf("sum: %d \n", sum);
  {
    //B area
    int i=6,j=10;

    for(;i<=j;i++)
      sum+=i;
    printf("sum: %d \n", sum);
  }
  printf("i: %d, sum: %d \n",i,sum);
  return 0;
}
/*
The result of this program is like thing.
-----------------------------------------
sum: 15
sum: 55
i: 6, sum: 55
-----------------------------------------
Tell me about the reason of the result!
answer:
The variable, i and j variable in the B area, declared in B area.
As a result, The variable, i and j variable in the B area, differs with the variable, i and j variable in the A area.
So, the variable, i and j variable, didn't output 11 in the A area.
On the other hand, the variable, sum variable, in the B area didn't declare.
As a result, The variable, sum variable,in the B area equals the variable,sum variable,in the A area.
So, the variable, sum variable, can output 55 in the A area.
*/
