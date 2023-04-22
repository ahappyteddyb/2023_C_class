#include <stdio.h>

int main (void)
{
//공백문자입력, ch1이라는 변수에 입력.
	char ch1 = ' ';
	
//ch1에 대문자 A를배정하시오
		ch1 = 'A';

//ch1을 화면에 출력하시오.
			printf ("ch1 : \'%c\'\n",ch1);
			printf ("ch1 : \'%d\'\n",ch1);
	
//변수 ch1에서 13번째 다음 알파벳을 화면에 출력하시오
// 아스키 코드표에 있는 숫자가 메모리에 배정됨. 
		ch1 = 'O';
			printf ("ch1 + 13 : \'%c\'\n");
			printf ("ch1 + 13 : \'%d\'\n",ch1);
	
//대문자를 입력하면 소문자로 변경하는 프로그램을 만들고싶다.
//대문자를 ch2로, 1문자 키보드로 입력받고 입력받은 값을 소문자로 변경하시오.
	char ch2;
			printf ("대문자를 입력하세요. : ");
			scanf("%c",&ch2);
			printf ("입력한 문자의 소문자는 : %c",ch2+32);

//첫시간에 hello world를 출력했다.
			printf("hello world!") ;
	
//이걸 world 해당하는 부분을 변수로 원하는 값을 출력하고싶다. 
	char ch3, ch4, ch5, ch6, ch7;
		ch3 = 'w';
		ch4 = 'o';
		ch5 = 'r';
		ch6 = 'l';
		ch7 = 'd';
			printf("hello,%c%c%c%c%c\n",ch3,ch4,ch5,ch6,ch7);

//암호화 버전 
//printf("hello,%d%d%d%d%d",ch3,ch4,ch5,ch6,ch7);

return 0;
} 