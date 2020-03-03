#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr, N, i;
	printf("입력할 배열의 크기? ");
	scanf("%d", &N);

	ptr = (int*)malloc(100);
	if (ptr == NULL)
	{
		printf("메모리 할당 실패 !!! \n");
		exit(1);
	}

	//동적할당 메모리에 입력(코드추가)
	for (i = 0; i < N; i++) {
		printf("%d, 정수? ",(i+1));
		scanf("%d",ptr++);
	}

	ptr = ptr - i;

	printf("\n동적메모리에 저장된 정수 \n");
	//동적할당 데이터 출력(코드추가)
	for (i = 0; i < N; i++)
		printf("%d, ", *ptr++);

	printf("\n");

	ptr = ptr - i;
	free(ptr);
	ptr = NULL;

	return 0;
}
