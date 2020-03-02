#include <stdio.h>
#define STU_SZ 3
#define STU_SB 5

struct STUDENT {
  char name[20];            //성명
  char subject[STU_SB][30]; //과목명
  int hakjum_unit[STU_SB];  //이수단위 시간
  double jumsu[STU_SB];     //과목별 평점
  double greade;            //총 평점
};
double stu_Calc(struct STUDENT stu);//함수선언
void heading();

int main()
{
  struct STUDENT stu[STU_SZ]={
    {"까궁이",
    "C/C++","JAVA","Oracle","전산개론","교양1",
    3,4,3,2,2,
    4.5,4.0,3.5,4.0,3.5, 0.0},
    {"몽룡이",
    "C#","전자공학","Oracle","VB.Net","교양2",
    4,3,2,4,2,
    2.5,3.5,3.0,4.0,2.5, 0.0},
    {"춘향이",
    "C/C++","Python","전신실무","교양1","교양3",
    3,4,3,2,2,
    4.0,2.0,1.5,4.5,3.0, 0.0}
  };
  int i,j;
  
  heading();
  for(i=0;i<STU_SZ;i++)
  {
    stu[i].greade=stu_Calc(stu[i]);
    printf("%5s, ",stu[i].name);
    for(j=0;j<STU_SB;j++)
      printf("%6s:%d:%.1lf, ",
      stu[i].subject[j],stu[i].hakjum_unit[j],stu[i].jumsu[j]);
    printf("=> %.2lf \n",stu[i].greade);
  }

  return 0;
}
double stu_Calc(struct STUDENT stu)
{
  int i, h_unit_tot=0;
  double tmp=0.0;

  for(i=0;i<STU_SB;i++)//평점 계산
  { 
    h_unit_tot += stu.hakjum_unit[i];
    tmp += (stu.hakjum_unit[i]*stu.jumsu[i]);
  }

  return tmp/h_unit_tot; //총 평점 반환
}
void heading()
{
	printf("===============================================================================\n");
	printf("성명    과목  학점     과목  학점     과목  학점     과목  학점     과목  학점    총평점 \n");
	printf("===============================================================================\n");
}
