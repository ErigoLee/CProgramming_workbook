#include <stdio.h>
#include <string.h>

int main()
{
	char names[10][20];
	int i, Cn;

	for (i = 0; i < 10; i++)
	{
		printf("%d, 성명? (입력종료: end) ", i + 1);
		fgets(names[i], sizeof(names[i]), stdin);//입력
		names[i][strlen(names[i]) - 1] = '\0';
		if (strcmp(names[i], "end")==0)  //종료조건
			break;
	}

	Cn = i;//입력된 인원수 저장

	printf("\n입력된 성명 => \n");
	for (i = 0; i < Cn; i++) //출력한 반복문
		printf("%-10s,", names[i]);
	printf("\n");

	return 0;
}
