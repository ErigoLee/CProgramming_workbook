#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char *ptr;

  ptr = (char*)malloc(100);
  if(ptr==NULL)
  {
    printf("메모리 할당 실패 !!! \n");
    exit(1);
  }

  strcpy(ptr, "Hello ");
  strcat(ptr, "world.");

  printf("%d, %s \n",sizeof(ptr),ptr);

  free(ptr);

  return 0;
  
}
/*
output outcome
4, Hello world
or
8, Hello world

4->32bit
8->64bit
*/
