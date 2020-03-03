#include <stdio.h>

int main()
{
  int mat1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int mat2[4][3] = {13,14,15,16,17,18,19,20,21,22,23,24};
  int matrix[3][3] = {0};
  int i, j, sum1=0, sum2=0, sum3=0;

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      //행렬계산 
      sum1+=mat1[i][j]*mat2[j][0];
      sum2+=mat1[i][j]*mat2[j][1];
      sum3+=mat1[i][j]*mat2[j][2];
    }
    //matrix 배열에 합 대입
    matrix[i][0]=sum1;
    matrix[i][1]=sum2;
    matrix[i][2]=sum3;
    sum1=0, sum2=0, sum3=0;
  }

  printf("3*4 mat1 행렬 \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
      printf("%3d, ",mat1[i][j]);
    printf("\n");
  }

  printf("\n4*3 mat2 행렬 \n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
      printf("%3d, ",mat2[i][j]);
    printf("\n");
  }

  printf("\nmat1 * mat2을 곱하여 3*3을 구한 matrix 행렬 \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      printf("%3d, ",matrix[i][j]);
    printf("\n");
  }

  return 0;
}
