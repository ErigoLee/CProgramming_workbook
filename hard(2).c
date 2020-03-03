#include <stdio.h>
#include <stdlib.h>

struct STUDENT {
	char name[20];
	int kor;
	int eng;
	int mat;
	float avg;
};

void heading();
int main()
{
	struct STUDENT stu;
	int i, result;
	FILE* fp;
	
	fp = fopen("고급2.dat","rb"); //이진파일 오픈
	if (fp == NULL)
	{
		printf("Open Error");
		exit(1);
	}
	heading();
	while (1)
	{
		if (fread(&stu, sizeof(stu), 1, fp) != 1) //fread()사용법!!
			break;
		printf("%s, %3d, %3d, %3d, %7.2f \n",stu.name,stu.kor,stu.eng,stu.mat,stu.avg);
	}

	return 0;
}

void heading()
{
	printf("================================\n");
	printf("성명   국어 영어 수학   평균\n");
	printf("================================\n");
}
