#include <stdio.h>

int main (void)
{
//변수 c를 선언하고 변수에 'w'를 배정한다.	
	char c;
		c = 'w'; 

//변수 c를 선언하고 초기값으로 w를 배정한다.
	char c = 'w'; 	

//정수형 변수 i, j, k 를 선언하고 초기값으로 각각 1,2,-7을 배정한다.
	int i = 1;
	int j = 2;
	int k = -7; 

//실수형 변수 x,y 를 선언하고 초기값으로 7777.0, 0.0001을 배정하라.
	float x = 7777.0;
	float y = 0.1; 
	
//true_false 라는 변수를 선언, 초기값으로 0을 배정하라.
	int true_false = 0; 
		true_false = 'a' + 1 < c;
			printf("결과값은 : %d\n",true_false);
	
		true_false = - i - 5 * j >= k + 1;
			printf("결과값은 : %d\n",true_false);	
		
		true_false =c < j < 5;
			printf("결과값은 : %d\n",true_false);

		true_false = x - 3.33 <= x+y;
			printf("결과값은 : %d\n",true_false);
	
		true_false = x < x+y;
			printf("결과값은 : %d\n",true_false);
//--------------------관계연산자------------------------------------------------------------------------------

	int i = 1;
	int j = 2;
	int k = 3;
	int same = 0;
		same = i == j ;
			printf ("결과값은 : %d\n",same);	

		same = i != j ;
			printf ("결과값은 : %d\n",same);
		
		same = i + j + k == -2 * -k ;
			printf ("결과값은 : %d\n",same);
//------------------등가연산자------------------------------------------------------------

	char c = 'B';
	int i = 3, j = 3, k = 3;
	float x = 0.0, y = 2.3;
	int logic = 0;
		logic = i && j && k;
			printf ("결과값은 : %d\n",logic);
			
		logic = x || i && j - 3;
			printf ("결과값은 : %d\n",logic);
			
		logic = i < j && x < y ;
			printf ("결과값은 : %d\n",logic);
			
		logic = i < j || x < y;
			printf ("결과값은 : %d\n",logic);
			
		logic = 'A' <= c && c <= 'Z';
			printf ("결과값은 : %d\n",logic);
			
		logic = c - 1 == 'A' || c + 1 == 'Z';
			printf ("결과값은 : %d\n",logic);								
//-----------------논리연산자---------------------------------------------- 

return 0;
}