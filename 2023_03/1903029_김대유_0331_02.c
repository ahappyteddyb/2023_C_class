#include <stdio.h>

int main (void)
{
//���а�꿡 ���� ����ϴ� pi�� ���� �����ϰ�ʹ�.
//������ �����ϰ� pi�� ���� �����Ͻÿ�.
	float pi;
		pi = 3.14;
		
//pi�� ���� ȭ�鿡 ����Ͻÿ� 
	printf("pi = %f\n",pi);

//pi�� 3.33�� ���ϰ� ȭ�鿡 ���
	printf("pi + 3.33 = %f\n",pi + 3.33) ;
	//or "pi = pi + 3.33;
	//sprintf("pi + 3.33 = %f\n",pi) ;" �� ���� �ٵ� �̷��� ���� ����� ��?��??? 
	
//���ĺ��� ù ���ڸ� �����ϰ� �ʹ�.
//������ �����ϰ� �����Ͻÿ�.
	char first;
		first = 'a';
	 
//���� ���� 1�� number_x ��� ������ �����ϰ�ʹ�.
	char number_x;
	   number_x = '1';
	   
//number_x�� �����Ȱ��� number_y�� �����ϰ�ʹ�.    
	char number_y;
	   number_y = number_x;

//������ pi �� �����ϰ� �����߰�, pi_plus ���� ����, pi �� 1�� ���� ���� ����.
	 	//����: 1�� 1.0�� �޸��� ũ�Ⱑ �ٸ�. 
	float pi_plus;
		pi_plus = pi+1.0;

//smallcomma��� ���ڸ� �����ϰ�,  '�� �����϶�. 
 	char smallcomma;
		smallcomma = ' \' ';
	
//s_n�� ����Ͻÿ�. ����� "����� �й��� s_n" �Դϴ� \n
	int s_n;	//s_n(student_number)
		s_n = 1903029;
			printf("����� �й��� \"%d\" �Դϴ�.\n",s_n);
		
return 0; 
}