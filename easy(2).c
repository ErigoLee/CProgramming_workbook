#include <stdio.h>

int main()
{
  struct STUDENT {
    char name[20]; //학생이름
    int score[3];//과목점수
    int sum; //합
    float avg; //평균
  };

  struct STUDENT std1 = {"홍길동",68,89,80};
  struct STUDENT *ptr; //구조체 포인터 변수 ptr 선언
  int i;

  ptr = &std1; //구조체 포이터 변수에 참조할 주소 저장
  
  for(i=0;i<3;i++)
    ptr->sum+=ptr->score[i];//합
  ptr->avg = (float)ptr->sum/3;//평균
  printf("%s, %d, %d, %d, %d, %.2f\n",
        ptr->name,ptr->score[0],ptr->score[1],ptr->score[2],ptr->sum,ptr->avg);
  return 0;
}
