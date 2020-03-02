
typedef struct point{
  int x;
  int y;
}POINT; //struct point -> POINT로 간략하게 할 수 있음.

int main(){
  double distance; //길이
  POINT start;//구조체 변수 start 선언
  POINT end;//구조체 변수 end 선언
  printf("시작점의 좌표 좌표, x1,y1? ");
  scanf("%d%d",&start.x,&start.y);
  printf("끝점 좌표, x2,y2? ");
  scanf("%d%d",&end.x,&end.y);
  //거리구하는 식
  distance = sqrt(pow((start.x-end.x),2)+pow((start.y-end.y),2));
  printf("두 점 사이의 거리: %lf \n",distance);
  return 0;
}
