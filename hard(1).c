#include <stdio.h>
#define STU_SZ 5

struct STUDENT {
  char name[20];            //성명
  char subject[STU_SZ][30]; //과목명
  int hakjum_unit[STU_SZ];  //이수단위 시간
  double jumsu[STU_SZ];     //과목별 평점
  double greade;            //총 평점
};
void heading();

int main()
{
  struct STUDENT stu={
    "까궁이",
    "C/C++","JAVA","Oracle","전산개론","교양1",
    3,3,2,4,3,
    4.5,3.0,3.5,4.0,3.5, 0.0
  };
  int i,h_unit_tot=0;
  double tmp=0.0;

  for(i=0;i<STU_SZ;i++) //총 이수시간과 학점계산 식
  {
    h_unit_tot += stu.hakjum_unit[i];
    tmp += (stu.hakjum_unit[i]*stu.jumsu[i]); 
  }

  stu.greade = tmp/h_unit_tot;
  heading();
  //학생데이터 출력
  printf("%5s, ", stu.name);
  for(i=0;i<STU_SZ;i++)
    printf("%6s:%d:%.1lf, ",stu.subject[i],stu.hakjum_unit[i],stu.jumsu[i]);
  printf(" => %.2lf\n",stu.greade);

  return 0;
}
void heading()
{
	printf("======================================================================================\n");
	printf("성명    과목  학점     과목  학점     과목  학점     과목  학점     과목  학점    총평점 \n");
	printf("=======================================================================================\n");
}
