#include <stdio.h> 

int main()
{
  int width, height, choice;
  printf("선택? (1:정사각형 ,2:직사각형)? ");
  scanf("%d", &choice);

  if(choice==1)
  {
    printf("한변의 길이? ");
    scanf("%d",&width);
    printf("사각형의 면적: %d\n",width*width);
    printf("사각형의 길이: %d\n",width*4);
  }
  else
  {
    printf("가로, 세로의 길이? ");
    scanf("%d%d",&width,&height);
    printf("직각형의 면적: %d\n",width*height);
    printf("직각형의 길이: %d\n",width*2+height*2);
  }
  return 0;
}
