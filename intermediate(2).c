#include <stdio.h>

int main()
{
  int score[10]={67, 93, 100, 60, 57, 86, 19, 60, 79, 84};
  int i, findScore, sw;

  printf("검색할 성적? ");
  scanf("%d", &findScore);

  sw=1;
  for(i=0;i<10;i++)
  {
    if(findScore==score[i]) //검색되었을 때 실행문
    {
      printf("검색된 첨자위치: %d, %d\n",i,score[i]); 
      sw=0;
    }
  }
  
  if(sw==1) //검색되지 않을 때
    printf("%d, Not found! \n",findScore);

  return 0;
}
