#include <stdio.h>
#include <limits.h>

int main(void)
{
	int num1 = 0;
	int i = 0;
	int num2 = 0;
	int div_cnt = 0;
	// 4. 3번에서 이어지는  1부터 int_max 까지 에서의 소수찾기.

	for (num1 = 1; num1 < 100; num1++)
	{
		//		printf("%d회차\n",num1);
		//		printf("-------------------\n");
		div_cnt = 0;
		num2 = num1;

		for (i = 2; i < num2; i++)
		{
			if (num2 % i == 0)
			{
				// 나눈 값i를 출력
				// printf("%d\n",i);

				// num1을 i 값을 나눈 몫을
				num2 = num2 / i;

				// i를 2로 초기화 함
				i = 1;

				// 나누어 떨어지는 수를 카운트
				div_cnt = div_cnt + 1;
				// 한번이라도 나누어 진다면 반복문 종료.
				break;
			}
		}
		if (div_cnt == 0)
		{
			printf("-------------\n");
			printf("%d 는 소수입니다.\n", num1);
		}
	}
	return 0;
}
