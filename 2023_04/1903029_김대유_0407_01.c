#include <stdio.h>

int main (void)
{
//���� i�� �����϶�, �ʱⰪ�� 0.
//���� ���� �� �ʱⰪ ����
	int i = 0;

//���� j�� �����ϰ� �ʱⰪ�� ������ �����Ͻÿ�.
	char j = ' ';

//���� f�� ���� �ʱⰪ 0.0
	float f = 0.0; 
	
//���� sum, num1, num2�� ����, �ʱⰪ 0
	int sum=0;
	int num1=0;
	int num2=0;
	
//	���� sum�� 1,2�� ����
//	sum, 1, 2�� ���� ȭ�鿡 ����Ͻÿ�.
//	num1 =11, num2=22, �� ���ϱ� 
		sum = num1+num2; 
			printf("%d=%d+%d\n",sum,num1,num2) ;

		num1=11;
		num2=22;
		sum = num1+num2;
			printf("%d=%d+%d\n",sum,num1,num2) ;
//Ű����� ���� �Է¹ޱ�
			printf("ù��° �����Է� : "); 
			scanf("%d",&num1);

			printf("�ι�° �����Է� : "); 
			scanf("%d",&num2); 

		sum = num1+num2; 
			printf("%5d=%5d+%5d\n",sum,num1,num2) ; 

//num1���� num2�� ���� �A �Ŀ� min�� ���
	int min = 0;
		min = num1-num2;
			printf("%d=%d-%d\n",min,num1,num2) ;

//���ϱ�
	int mul=0;
		mul = num1*num2;
			printf("%d=%d*%d\n",mul,num1,num2) ; 
	
//������
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