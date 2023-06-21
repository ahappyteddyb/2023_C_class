#include <stdio.h>
#include <limits.h>

int main(void)
{
	int num1;
	int i;
	int num2;
	int div_cnt;
	int n_prime;

	// 4. 3번에서 이어지는  1부터 int_max 까지 에서의 소수찾기.

	for (num1 = 1; num1 < 100; num1++) // num1을 1부터 시작; num1이 INT_MAX보다 작으면; num1을 1 씩 증가.
	{
		//		printf("%d회차\n",num1);
		//		printf("-------------------\n"); (3번문제에서 사용했으므로 주석처리.)
		div_cnt = 0; // div_cnt 라는 변수를 0으로 초기화.
		num2 = num1; // num2라는 변수안에 num1의 값을 입력.

		for (i = 2; i < num2; i++) // i라는 변수를 2부터 시작; i가 num2보다 작을때; i를 2씩 증가.
		{
			if (num2 % i == 0) // num2를 i로 나눈값의 나머지가 0이면;
			{
				// 나눈 값i를 출력
				// printf("%d\n",i); (3번 문제에서 사용했으므로 주석처리)

				// num2를 i로 나눈값의 나머지가 0이면, num2는 num2나누기 i;
				num2 = num2 / i;
				i = 1;

				// 나누어 떨어지는 수를 카운트
				div_cnt = div_cnt + 1;
				// 한번이라도 나누어 진다면 반복문 종료.
				break;
			}
		}

		if (div_cnt == 0)
		{
			n_prime = n_prime + 1;
			printf("-----------------------------------\n");
			printf("%d 는 %d번째 소수입니다.\n", num1, n_prime);
		}
	}

	return 0;
}
