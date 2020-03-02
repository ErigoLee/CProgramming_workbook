#include <stdio.h>

int main()
{
	int Num, tmp, base;

	printf("정수를 입력하시오: ");
	scanf("%d", &Num);//1234

	base = 1000;
	while (Num)
	{
		tmp = Num / base;
		printf("%5d 단위 값 : %d \n", base, tmp);

		Num = Num % base;
		base = base / 10;
	}
	return 0;
}
/*
output outcome
정수를 입력하시오: 1234
 1000 단위 값: 1
  100 단위 값: 2
   10 단위 값: 3
    1 단위 값: 4
*/
