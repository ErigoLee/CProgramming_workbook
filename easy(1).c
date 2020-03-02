#include <stdio.h>

int main()
{
	struct STUDENT {
		char name[20]; //학생이름
		int score[3];//과목점수
		int sum; //합
		float avg; //평균
	};

	struct STUDENT std1 = { "홍길동",68,89,80 };
	int i;

	
	for (i = 0; i < 3; i++)
		std1.sum += std1.score[i];
	std1.avg = (float)std1.sum / 3;
	printf("%s, %d, %d, %d, %d, %.2f\n",
		std1.name, std1.score[0], std1.score[1], std1.score[2], std1.sum, std1.avg);
	return 0;
}
