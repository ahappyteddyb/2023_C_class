#include <stdio.h>
#include <limits.h>

int main(void)
{
	int num1;
	int i;
	int num2;
	// 3. 1부터 int_max 까지 모든 수를 소인수 분해 하라.

	for (num1 = 1; num1 < INT_MAX; num1++)
	{
		printf("-------------------\n");
		printf("%d\n", num1); // 4
		num2 = num1;

		for (i = 2; i < num2; i++)
		{
			if (num2 % i == 0)
			{
				printf("%d", i); // 2
				num2 = num2 / i;
				i = 1;
			}
		}
	}

	return 0;
}
