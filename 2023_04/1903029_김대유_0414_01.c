#include <stdio.h>

int main (void)
{
//���� c�� �����ϰ� ������ 'w'�� �����Ѵ�.	
	char c;
		c = 'w'; 

//���� c�� �����ϰ� �ʱⰪ���� w�� �����Ѵ�.
	char c = 'w'; 	

//������ ���� i, j, k �� �����ϰ� �ʱⰪ���� ���� 1,2,-7�� �����Ѵ�.
	int i = 1;
	int j = 2;
	int k = -7; 

//�Ǽ��� ���� x,y �� �����ϰ� �ʱⰪ���� 7777.0, 0.0001�� �����϶�.
	float x = 7777.0;
	float y = 0.1; 
	
//true_false ��� ������ ����, �ʱⰪ���� 0�� �����϶�.
	int true_false = 0; 
		true_false = 'a' + 1 < c;
			printf("������� : %d\n",true_false);
	
		true_false = - i - 5 * j >= k + 1;
			printf("������� : %d\n",true_false);	
		
		true_false =c < j < 5;
			printf("������� : %d\n",true_false);

		true_false = x - 3.33 <= x+y;
			printf("������� : %d\n",true_false);
	
		true_false = x < x+y;
			printf("������� : %d\n",true_false);
//--------------------���迬����------------------------------------------------------------------------------

	int i = 1;
	int j = 2;
	int k = 3;
	int same = 0;
		same = i == j ;
			printf ("������� : %d\n",same);	

		same = i != j ;
			printf ("������� : %d\n",same);
		
		same = i + j + k == -2 * -k ;
			printf ("������� : %d\n",same);
//------------------�������------------------------------------------------------------

	char c = 'B';
	int i = 3, j = 3, k = 3;
	float x = 0.0, y = 2.3;
	int logic = 0;
		logic = i && j && k;
			printf ("������� : %d\n",logic);
			
		logic = x || i && j - 3;
			printf ("������� : %d\n",logic);
			
		logic = i < j && x < y ;
			printf ("������� : %d\n",logic);
			
		logic = i < j || x < y;
			printf ("������� : %d\n",logic);
			
		logic = 'A' <= c && c <= 'Z';
			printf ("������� : %d\n",logic);
			
		logic = c - 1 == 'A' || c + 1 == 'Z';
			printf ("������� : %d\n",logic);								
//-----------------��������---------------------------------------------- 

return 0;
}