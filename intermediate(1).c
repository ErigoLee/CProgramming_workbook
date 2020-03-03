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
	struct STUDENT stu[STU_SZ] = {	{"까궁이",89,96,94},
									{"한송이",53,73,84},
									{"두송이",39,90,69}};
	int i;
	FILE* fp;

	for (i = 0; i < STU_SZ; i++)
		stu[i].avg = (float)(stu[i].kor + stu[i].eng + stu[i].mat) / 3;
	
	heading();

	for (i = 0; i < STU_SZ; i++)
		printf("%s, %3d, %3d, %3d, %7.2f \n",stu[i].name,stu[i].kor,stu[i].eng,stu[i].mat,stu[i].avg);
	
	fp = fopen("중급1.txt","wt");// 스티림 연결
	if (fp == NULL)
	{
		printf("Open Error. \n");
		exit(1);
	}
	//파일 저장(코드저장)
	for(i=0;i<STU_SZ;i++)
	{
		fprintf(fp,"%s %3d %3d %3d %7.2f \n",stu[i].name,stu[i].kor, stu[i].eng, stu[i].mat, stu[i].avg);
	}

	fclose(fp); //스트림 닫기
	printf("중급1.txt 파일저장 \n");

	return 0;
}

void heading()
{
	printf("=================================\n");
	printf("성명  국어 영어 수학 평균 \n");
	printf("=================================\n");
}
