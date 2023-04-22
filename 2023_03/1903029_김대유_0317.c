#include <stdio.h>

int main (void)
{
//이 프로그램은 
//나의 첫 프로그램 입니다.
	printf("hello\t world\n\n"); 
	printf("hello\t world\n"); 

	int a, b, c;
		printf("Input two integers :" );
		scanf("%d%d", &b, &c);
			a = b + c;
		printf("%d = %d + %d", a,b,c);

return 0;
}