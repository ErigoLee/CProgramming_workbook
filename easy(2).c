#include <stdio.h>
#include <stdlib.h>

int main()
{
	double* ptr;
	int i;

	ptr = (double*)malloc(100); //동적할당
	if (ptr == NULL)
	{
		printf("메모리 할당 실패 !!! \n");
		exit(1);
	}
	//데이터 저장(코드저장)
	for (i = 1; i <= 10; i++)
		* ptr++ = (double)i;

	ptr = ptr - (i - 1);
	printf("\n동적메모리에 저장된 실수 \n");
	//데이터 출력(코드입력)
	for (i = 1; i <= 10; i++)
		printf("%.2lf, ", *ptr++);
	printf("\n");


	ptr = NULL;
	free(ptr);
	return 0;
}
