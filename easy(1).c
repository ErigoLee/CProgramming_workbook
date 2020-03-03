#include <stdio.h>
#include <string.h>

int main()
{
  char names[5][20]={"kim","lee","han","park","uk"};
  char tmp[100]="";
  int i;

  for(i=0;i<5;i++)
  {
      strcat(tmp, names[i]);
      strcat(tmp, ",");
  }

  printf("tmp : %s \n",tmp);
  return 0;
}
/*
Tell me about the result of the program!
answer:
tmp : kim,lee,han,park,uk,
Because, The strcat function executes connecting character string.

*/
