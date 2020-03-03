//입력된 날짜의 요일 구하기
#include <stdio.h>

int dayStartFunc(int year, int mon, int day);

int main()
{
  int inputDate, year, month, day;
  int dayStart;//달의 날짜가 시작되는 요일

  char days[7][10]={"일","월","화","수","목","금","토"};

  printf("날짜(yyyymmdd) : ");
  scanf("%d",&inputDate); //20170305 입력

  year = inputDate/10000;         //2017
  month = (inputDate%10000)/100;  //3
  day = (inputDate%10000)%100;    //5

  printf("day: %d, month: %d, day: %d \n",year,month,day);
  
  //입력된 날짜의 일수 계산함수 호출
  dayStart = dayStartFunc(year,month,day);

  printf("\n%d년 %d월 %d 일은  %s 요일\n",year,month,day,days[dayStart]);
  
  return 0;
}

int dayStartFunc(int year, int mon, int day)
{
  //윤년아닐 때 월별 일자
  int yearMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int i, t_day=365, day_sum=0;

  for(i=1;i<year;i++)
  {
    if(i%4==0&&(i%100!=0||i%400==0))
      t_day++;
    day_sum+=t_day;
    t_day=365;
    if(i==year-1)
      day_sum++;
  } 

  for(i=1;i<mon;i++)
  {
    if(i==2&&(year%4==0&&(year%100!=0||year%400==0)))
      day_sum+=29;
    else
      day_sum+=yearMonth[i];
  }

  return (day_sum+(day-1))%7; //년,전 월까지의 합과 현재달의 일자 더하여 반환
}
/*
I need to revise this code.
*/
