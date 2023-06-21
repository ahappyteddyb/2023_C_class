#include <stdio.h>

int main(void)
{
	// 1. 변수 a와 b에 각각 3과 5를 배정하고
	//  두 변수의 합을 c에 배정하고 c의 값을 출력하라.

	printf("1.\n");
	int a = 3;
	int b = 5;
	int c = a + b;

	printf("%d+%d = %d\n\n", a, b, c);

	// 2. a를 b로 나누고 값을 c에 배정.
	//	c의 값을 출력하시오.

	printf("2.\n");
	float c1 = (float)a / b;

	printf("%d/%d = %f\n\n", a, b, c1);

	// 3. 변수 f를 선언하고 문자 a를 배정하시오
	// 10번째 뒤의 문자를 출력하시오
	printf("3.\n ");
	char f = 'a';

	printf("%c\n\n", f + 10);

	// 4. a와 b의 크기를 비교하고 둘중 큰 수를 출력하시오
	printf("4.\n");
	if (a > b)
	{
		printf("변수 a가 더 크다.\n  변수 a : %d\n\n", a);
	}
	else if (a < b)
	{
		printf("변수 b가 더 크다.\n  변수 b : %d\n\n", b);
	}
	else
	{
		printf("값이 같습니다\n");
	}

	// 4-1. 변수 a를 x로, b를 y로 변환하고 x와 y를 입력받아 아래의 코드를 실행하시오.
	printf("4-1.\n");
	int x;
	int y;

	printf("x의 값을 입력하세요 :");
	scanf("%d", &x);
	printf("y의 값을 입력하세요 :");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x가 더 크다.\nx : %d\n\n", x);
	}
	else if (x < y)
	{
		printf("y가 더 크다.\ny : %d\n\n", y);
	}
	else
	{
		printf("값이 같습니다\n");
	}

	// 5. 변수 z를 선언하고, 값을 키보드로 입력받아 z가 짝수인지 홀수인지
	// 확인하고 짝수 또는 홀수 라고 출력하시오
	printf("5.\n");
	int z;

	printf("숫자를 입력하세요 :");

	scanf("%d", &z);

	if (z % 2 == 0)
	{
		printf("짝수입니다.\n\n");
	}
	else
	{
		printf("홀수입니다.\n\n");
	}
	// 5-1. 입력받은 변수 z가 3의 배수인지 확인하라.
	printf("5-1.\n");
	printf("숫자를 입력하세요 :\n");

	scanf("%d", &z);

	if (z % 3 == 0)
	{
		printf("3의 배수입니다.\n");
	}
	else
	{
		printf("3의 배수가 아닙니다.\n");
	}

	return 0;
}
