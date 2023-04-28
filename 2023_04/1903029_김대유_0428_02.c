#include <stdio.h>

int main (void)
{
// n1, n2, 두개의 변수에 각각 5, 3의 숫자가 들어있다.
// n1, n2의 작은 수부터 차례대로 들어가도록 프로그램을 작성하시오.
	int n1 = 5;
	int n2 = 3;
	int nt = 0;
	
	if (n1<=n2)
	{
		
	}
	else
	{
		nt = n2;
		n2 = n1;
		n1 = nt;
			printf("%d,%d",n1,n2);
	}
	
//	if (n1<n2)
//	{
//		printf("%d,%d",n1,n2);
//	}
//	
//	if (n2<n1)
//	{
//		printf("%d,%d",n2,n1);
//	}

return 0;
}
