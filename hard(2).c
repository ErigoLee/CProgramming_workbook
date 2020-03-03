#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* score, stCount, i;

	printf("성적을 입력할 학생 수? ");
	scanf("%d", &stCount);

	score = (int*)calloc(100, sizeof(int));//동적할당
	//score=(int*)malloc(100);
	if (score == NULL)
	{
		printf("메모리 할당 실패 !!! \n");
		exit(1);
	}

	for (i = 0; i < stCount; i++)
	{
		//코드추가, 점수입력과 값의 범위 확인
		printf("%d, 성적? ", (i + 1));
		scanf("%d", score);
		if (*score < 0 || *score>100)
		{
			i--;
			continue;
		}
		score++;
	}

	score = score - i;
	*(score + stCount) = *score;
	*(score + stCount + 1) = *score;
	printf("%d, %d \n", *(score+stCount), *(score+stCount + 1));
	//최대점수, 최소점수 구하기
	for (i = 0; i < stCount; i++)
	{
		//코드추가
		if (*score > * (score + stCount - i))
			* (score + stCount - i) = *score;
		if (*score < *(score + stCount + 1 - i))
			* (score + stCount + 1 - i) = *score;
		score++;
	}
	score = score - i;
	printf("\n동적메모리에 저장된 성적 \n");
	for (i = 0; i < stCount; i++) //데이터 출력
		printf("%d, ", *score++);
	printf("\n");
	//최대점수, 최소점수 출력
	printf("최대값: %d, 최소값: %d \n", *score, *(score + 1));

	score = score - i;
	free(score);
	score = NULL;
	return 0;
}
