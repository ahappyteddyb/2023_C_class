#include <stdio.h>

int main(void)
{
	// 1 = true 0 = false

	// 1. 변수 a와 b가 있다. 변수 a가 b보다 작은 경우 아래 문장을 출력하시오
	//  a 의 초기값은 0, b의 초기값은 10 이다.
	//  반복문이 한번 실행될 때마다 a의 값이 1씩 증가한다.
	int a;
	a = 0;
	int b;
	b = 10;

	while (a < b)
	{
		printf("a 의 초기값은 %d, b의 초기값은 %d 이다.\n", a, b);
		a++;
	}

	// 2. 임의의 숫자가 있다. 그 숫자를 맞추는 게임이다.
	// 사용자가 숫자를 입력하고, 임의의 수 보다 크면 "숫자가 작습니다."
	//  작으면 "숫자가 큽니다." 를, 같으면 "정답입니다!"를 출력하는 프로그램 작성.

	int x = 133;
	int i_n;

	while (x != i_n)
	{
		printf("숫자를 입력하세요 :");
		scanf("%d", &i_n);

		if (x > i_n)
		{
			printf("숫자가 작습니다.\n");
		}

		else if (x < i_n)
		{
			printf("숫자가 큽니다.\n");
		}

		else
		{
			printf("정답입니다!\n");
		}
	}

	// 3. 1~10까지 합을 계산하는 프로그램
	// for 문을 사용하여 계산하시오.
	int n = 0;
	int sn = 0;
	for (n = 1; n <= 10; n++)
	{

		sn = sn + n;
		printf("%d번째 %d\n\n", n, sn);
	}
	// 4. 위의 for문을 while 문으로 작성하라.

	n = 1;
	while (n <= 10)
	{
		sn = sn + n;
		printf("%d : %d\n\n", n, sn);
		n = n + 1;
	}

	// 5. 인도에서는 100단 암기가 유행인데, 100단을 출력하는 프로그램을 작성하시오.
	// for 문을 사용할것.

	int q;
	int w;
	for (q = 2; q < 100; q++)
	{
		for (w = 1; w < 100; w++)
		{
			printf("%d * %d = %d\n", q, w, (q * w));
		}
		printf("\n");
	}

	return 0;
}
