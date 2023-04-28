#include <stdio.h>

int main (void)
{
// 두수 n1, n2를 키보드로 입력받아
// 큰 수는 "max number : "
// 작은수는 "min number : " 로 출력하시오.
 	int n1;
 	int n2;
 		scanf("%d %d", &n1, &n2);

	 if (n1<=n2)
 	{
 		printf("Max number :%d\n",n1);
 		printf("Min number :%d\n",n2);
 	}

	 else 
	 {
		printf("Max number :%d\n",n2);
 		printf("Min number :%d\n",n1);
	 }
 
// if (n1<=n2)
//	{
// 	min_number = n1;
// 	max_maxber = n2;
//	 }

// else 
//	{
// 	min_number = n2;
// 	max_maxber = n1;
// 	}

// 	printf("Max number :%d\n",max_number);
// 	printf("Min number :%d\n",min_number);
//	또 다른 방법이다. 이 방법이 코드 읽을때는 편한거 같다는 생각이다. 
return 0;
}
