#include <stdio.h>

int main (void)
{
//변수 i를 선언하라, 초기값은 0.
//변수 선언 및 초기값 배정
	int i = 0;

//변수 j를 선언하고 초기값에 공란을 배정하시오.
	char j = ' ';

//변수 f를 선언 초기값 0.0
	float f = 0.0; 
	
//변수 sum, num1, num2를 선언, 초기값 0
	int sum=0;
	int num1=0;
	int num2=0;
	
//	변수 sum에 1,2를 더해
//	sum, 1, 2의 값을 화면에 출력하시오.
//	num1 =11, num2=22, 합 구하기 
		sum = num1+num2; 
			printf("%d=%d+%d\n",sum,num1,num2) ;

		num1=11;
		num2=22;
		sum = num1+num2;
			printf("%d=%d+%d\n",sum,num1,num2) ;
//키보드로 값을 입력받기
			printf("첫번째 값을입력 : "); 
			scanf("%d",&num1);

			printf("두번째 값을입력 : "); 
			scanf("%d",&num2); 

		sum = num1+num2; 
			printf("%5d=%5d+%5d\n",sum,num1,num2) ; 

//num1에서 num2의 값을 뺸 후에 min에 출력
	int min = 0;
		min = num1-num2;
			printf("%d=%d-%d\n",min,num1,num2) ;

//곱하기
	int mul=0;
		mul = num1*num2;
			printf("%d=%d*%d\n",mul,num1,num2) ; 
	
//나눗셈
	float div=0.0;
	float num3, num4 = 0.0;
		num3=num1;
		num4=num2; 
		div = num3/num4;
			printf("%f=%f/%f\n",div,num3,num4) ;  

	float div=0.0;
		div = (float)num1/(float)num2;
			printf("%f=%d/%d\n",div,num1,num2) ; 
		
return 0;
}