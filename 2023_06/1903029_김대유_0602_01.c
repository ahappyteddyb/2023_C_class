#include <stdio.h>
#include <limits.h>

int main(void)
{
	int num1 = 0;
	int i = 0;
	int num2 = 0;
	int div_cnt = 0;
	int n_prime;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	int a6 = 0;
	int a7 = 0;
	int a8 = 0;
	int a9 = 0;
	int a10 = 0;
	int a11 = 0;

	// 4. 3번에서 이어지는  1부터 int_max 까지 에서의 소수찾기.

	for (num1 = 2; num1 < INT_MAX; num1++)
	{
		div_cnt = 0;
		num2 = num1;

		for (i = 2; i < num2; i++)
		{
			if (num2 % i == 0)
			{

				num2 = num2 / i;
				i = 1;
				div_cnt = div_cnt + 1;
				break;
			}
		}

		if (div_cnt == 0)
		{
			n_prime = n_prime + 1;
			// printf("-----------------------------------\n");
			// printf("%d 는 %d번째 소수입니다.\n",num1,n_prime);

			if (n_prime == 0)
			{

				a1 = num1;
			}
			if (n_prime == 1)
			{

				a2 = num1;
			}
			if (n_prime == 2)
			{

				a3 = num1;
			}
			if (n_prime == 3)
			{

				a4 = num1;
			}
			if (n_prime == 4)
			{

				a5 = num1;
			}
			if (n_prime == 5)
			{

				a6 = num1;
			}
			if (n_prime == 6)
			{

				a7 = num1;
			}
			if (n_prime == 7)
			{

				a8 = num1;
			}
			if (n_prime == 8)
			{

				a9 = num1;
			}
			if (n_prime == 9)
			{
				a10 = num1;
			}
			if (n_prime > 10)
			{
				break;
			}
		}
	}
	printf("몇번째 소수가 알고 싶으신가용? : ");
	scanf("%d", &n_prime);
	if (n_prime == 1)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a1);
	}
	if (n_prime == 2)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a2);
	}

	if (n_prime == 3)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a3);
	}

	if (n_prime == 4)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a4);
	}

	if (n_prime == 5)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a5);
	}

	if (n_prime == 6)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a6);
	}

	if (n_prime == 7)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a7);
	}

	if (n_prime == 8)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a8);
	}

	if (n_prime == 9)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a9);
	}

	if (n_prime == 10)
	{
		printf("%d번째 소수는 %d 입니다.", n_prime, a10);
	}

	if (n_prime > 10)
	{
		printf("%d번째 소수의 값이 없습니다..", n_prime, a11);
	}

	return 0;
}
