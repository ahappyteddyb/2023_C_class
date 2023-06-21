#include <stdio.h>
#include <limits.h>

int main(void)
{

	// 2.소인수 분해를 하는 프로그램을 작성하려 한다.
	//   임의의 수를 num1에 배정한다.
	//   num1 = 140;
	//   2부터 num1을 나누어 떨어지는지 확인
	// printf("%lld\n", LLONG_MAX);

	printf("%d\n", INT_MAX);
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	int div_cnt = 0;
	int n_prime_num = 0;
	int prime_numbers[100000] = {0};
	int nth_prime_number = 0;

	// 3. 1부터 INT_MAX까지 모든 수를 소인수 분해하고 싶다.
	for (num1 = 2; num1 < INT_MAX; num1++)
	{
		// printf("========================\n");
		// printf("%d\n",num1);

		div_cnt = 0;
		num2 = num1;

		for (i = 2; i < num2; i++)
		{
			// num1이 1로 나누어 떨어지는지 확인
			if (num2 % i == 0)
			{

				// 나눈 값(i)을 출력
				// printf("%d ",i);
				// num1을 i값을 나눈 몫을 배정
				num2 = num2 / i;
				// i를 2로 초기화를해
				i = 1;

				// 나누어 떠어지는 수를 카운트
				div_cnt = div_cnt + 1;

				// 한번이라도 나누어 떨어지면 반복문 종료
				break;
			}
		}

		if (div_cnt == 0)
		{
			// printf("========================\n");
			// printf("%d는 %d번째 소수입니다.\n",num1,n_prime_num);
			prime_numbers[n_prime_num] = num1;
			n_prime_num = n_prime_num + 1;
			if (n_prime_num % 1000 == 0)
			{
				printf("%dth Processing...\n", n_prime_num);
			}
		}

		if (n_prime_num == 100000)
		{
			break;
		}
	}

	// 몇번째 소수를 알고 싶으신가요?
	// 지금은 테스트 버전입니다.
	// 10번째 소수까지만 알려드릴 수 있습니다.
	// 숫자를 입력받고 -> n번째 소수를 출력

	printf("몇번째 소수를 알고 싶으신가요? : ");
	scanf("%d", &nth_prime_number);
	printf("%d번째 소수는 %d입니다.\n", nth_prime_number, prime_numbers[nth_prime_number - 1]);

	return 0;
}
