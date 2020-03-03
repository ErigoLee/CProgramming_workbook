#include <stdio.h>
#include <math.h>

#define numSZ 5

int main()
{
	double douData[numSZ + 3] = { 0 };  //배열선언
	double sum = 0, vSum = 0;
	int i;

	for (i = 0; i < numSZ; i++)
	{
		printf("%d, 실수를 입력하세요 : ", i + 1);
		scanf("%lf", &douData[i]);
		sum += douData[i];
	}
  	douData[numSZ] = sum / numSZ; //평균

	for (i = 0; i < numSZ; i++)
	{
		//각 편차의 제곱을 계산한 합
		vSum += (douData[i] - douData[numSZ]) * (douData[i] - douData[numSZ]);
	}
	douData[numSZ + 1] = vSum / numSZ;  //분산
	douData[numSZ + 2] = sqrt(douData[numSZ + 1]); //표준편차

	printf("\n입력데이터\n");
	for (i = 0; i < numSZ; i++)
		printf("%.2lf, ", douData[i]);

	printf("\n평균: %lf \n", douData[numSZ]);    //평균
	printf("분산: %lf \n", douData[numSZ + 1]);    //분산
	printf("표준편차: %lf \n", douData[numSZ + 2]);//표준편차 

	return 0;
}
