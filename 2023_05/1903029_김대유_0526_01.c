#include <stdio.h>
#include <limits.h>

int main(void)
{
	// 1.0~10까지 출력
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	i;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;
	}

	// 2. 소인수분해를 하는 프로그램 작성, num1 = 140
	int num1 = 140;

	for (i = 2; i < 140; i++)
	{
		if (num1 % i == 0)
		{
			printf("%d\n--%d\n", i, num1);
			num1 = num1 / i;
			i = 1;
		}
	}
	// 3. 1부터 int_max 까지 모든 수를 소인수 분해 하라.

	for (num1 = 1; num1 < INT_MAX; num1++)
	{
		printf("%d\n", num1);
		printf("-------------------\n");

		for (i = 2; i < num1; i++)
		{
			if (num1 % i == 0)
			{
				printf("%d", i);
				num1 = num1 / i;
				i = 1;
			}
		}
	}
	return 0;
}
