#include <stdio.h>

int main (void)
{
//공학계산에 자주 사용하는 pi의 값을 저장하고싶다.
//변수를 선언하고 pi의 값을 배정하시오.
	float pi;
		pi = 3.14;
		
//pi의 값을 화면에 출력하시오 
	printf("pi = %f\n",pi);

//pi에 3.33을 더하고 화면에 출력
	printf("pi + 3.33 = %f\n",pi + 3.33) ;
	//or "pi = pi + 3.33;
	//sprintf("pi + 3.33 = %f\n",pi) ;" 도 가능 근데 이러면 값을 덮어씌움 몰?루??? 
	
//알파벳의 첫 글자를 배정하고 싶다.
//변수를 선언하고 배정하시오.
	char first;
		first = 'a';
	 
//나는 문자 1을 number_x 라는 변수에 배정하고싶다.
	char number_x;
	   number_x = '1';
	   
//number_x에 배정된값을 number_y에 배정하고싶다.    
	char number_y;
	   number_y = number_x;

//위에서 pi 를 선언하고 배정했고, pi_plus 변수 선언, pi 에 1을 더한 값을 배정.
	 	//참고: 1과 1.0은 메모리의 크기가 다름. 
	float pi_plus;
		pi_plus = pi+1.0;

//smallcomma라는 문자를 선언하고,  '를 배정하라. 
 	char smallcomma;
		smallcomma = ' \' ';
	
//s_n을 출력하시오. 출력은 "당신의 학번은 s_n" 입니다 \n
	int s_n;	//s_n(student_number)
		s_n = 1903029;
			printf("당신의 학번은 \"%d\" 입니다.\n",s_n);
		
return 0; 
}