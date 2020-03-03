#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  int *ptr, N, i, sum;
  printf("입력할 배열의 크기? ");
  scanf("%d", &N);

  ptr=(int *)calloc(100,sizeof(int)); //동적할당
  if(ptr==NULL)
  {
    printf("메모리 할당 실패 !!! \n");
    exit(1);
  }

  for(i=0;i<N;i++) //반복(입력 및 합을 구함)
  {
    //코드추가
    printf("%d, 정수? ",(i+1));
    scanf("%d",ptr);
    sum+= *ptr++;
  }
  ptr=ptr-i;

  printf("\n동적메모리에 저장된 정수 \n");
  for(i=0;i<N;i++) //입력데이터 출력
    printf("%d, ",*ptr++);
  
  printf("\n합: %d\n",sum);//합출력

  ptr=ptr-i;
  free(ptr);
  ptr=NULL;
  return 0;
}
