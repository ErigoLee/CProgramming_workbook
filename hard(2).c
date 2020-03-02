#include <stdio.h>

#define BMI1 "저체중"
#define BMI2 "표준체중"
#define BMI3 "과체중"
#define BMI4 "비만"

void BMI(int ageBase, float height, float kg);//함수선언

int main()
{
  float kg;
  float height;
  double result;
  int ageBase;

  printf("키(신장)를 입력하세요(m) ");
  scanf("%f", &height);
  printf("체중을 입력하세요(kg) ");
  scanf("%f", &kg);
  printf("연령대 선택? (1:20대, 2:30대 이상)");
  scanf("%d",&ageBase);

  BMI(ageBase,height,kg);
  
  return 0;
}

void BMI(int ageBase, float height, float kg)
{
  double bmi = kg/(height*height); //키가 m 로 입력이 될 때
  
  if(ageBase==1)
  {
    if(bmi<=17.9)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI1);
    else if(bmi<=23)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI2);
    else if(bmi<=30)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI3);
    else
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI4);
  }
  else if(ageBase==2)
  {
    if(bmi<=18.5)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI1);
    else if(bmi<=25)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI2);
    else if(bmi<=32)
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI3);
    else
      printf("당신의 BMI 지수는 %.2lf, 비만기준: %s\n",bmi,BMI4);
  }
}
