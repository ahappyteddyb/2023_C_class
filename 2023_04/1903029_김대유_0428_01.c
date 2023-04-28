#include <stdio.h>

int main (void)
{
// 정수형 변수 n1,n2을 선언하고 초기값 0
	int n1 = 0;
	int n2 = 0;

// n1에 3을 배정하고 n2에 5를 배정
// 만약 n1 and n2 가 참이면
// "n1 && n2 is True" 를
// 거짓이면 "n1 && n2 is False"를 출력하시오
		n1 = 3;
		n2 = 5;

	if(n1 && n2)
	{
		printf("n1 && n2 is true\n");
	}
	else
	{
		printf("n1 && n2 is false");
	}

// 만약 n1 and n2 가 거짓이면
// "n1 && n2 is False" 를 출력하시오	
//	if(!(n1 && n2))
//	{
//		printf("n1 && n2 is false\n");
//	}
//		
// n1 and n2 가 거짓이되게 바꾸고 위의 if 문을 다시 실행하시오
// 거짓인 n1 AND n2 가 출력 되도록 바꾸시오
//	n1 = 0;	
//	if(!n1 && n2)
//	{
//		printf("n1 && n2 is false");
//	}

return 0;
}
