#include <stdio.h>
#include <stdlib.h>

#define STU_SZ 3

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
	int result;
	FILE* fp;

	fp=fopen("중급2.txt","rt");
	if (fp == NULL)
	{
		printf("Open Error. \n");
		exit(1);
	}
	heading();

	while (fscanf(fp,"%s %d %d %d %f",stu.name,&stu.kor,&stu.eng,&stu.mat,&stu.avg)>0)
	{
		//파일 읽기 코드 작성
		printf("%s, %3d, %3d, %3d, %7.2f \n",stu.name,stu.kor,stu.eng,stu.mat,stu.avg);
	}

	fclose(fp);

	return 0;
}

void heading()
{
	printf("=================================\n");
	printf("성명    국어 영어 수학   평균 \n");
	printf("=================================\n");
}
