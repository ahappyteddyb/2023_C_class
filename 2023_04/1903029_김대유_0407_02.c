#include <stdio.h>

int main (void)
{
//���鹮���Է�, ch1�̶�� ������ �Է�.
	char ch1 = ' ';
	
//ch1�� �빮�� A�������Ͻÿ�
		ch1 = 'A';

//ch1�� ȭ�鿡 ����Ͻÿ�.
			printf ("ch1 : \'%c\'\n",ch1);
			printf ("ch1 : \'%d\'\n",ch1);
	
//���� ch1���� 13��° ���� ���ĺ��� ȭ�鿡 ����Ͻÿ�
// �ƽ�Ű �ڵ�ǥ�� �ִ� ���ڰ� �޸𸮿� ������. 
		ch1 = 'O';
			printf ("ch1 + 13 : \'%c\'\n");
			printf ("ch1 + 13 : \'%d\'\n",ch1);
	
//�빮�ڸ� �Է��ϸ� �ҹ��ڷ� �����ϴ� ���α׷��� �����ʹ�.
//�빮�ڸ� ch2��, 1���� Ű����� �Է¹ް� �Է¹��� ���� �ҹ��ڷ� �����Ͻÿ�.
	char ch2;
			printf ("�빮�ڸ� �Է��ϼ���. : ");
			scanf("%c",&ch2);
			printf ("�Է��� ������ �ҹ��ڴ� : %c",ch2+32);

//ù�ð��� hello world�� ����ߴ�.
			printf("hello world!") ;
	
//�̰� world �ش��ϴ� �κ��� ������ ���ϴ� ���� ����ϰ�ʹ�. 
	char ch3, ch4, ch5, ch6, ch7;
		ch3 = 'w';
		ch4 = 'o';
		ch5 = 'r';
		ch6 = 'l';
		ch7 = 'd';
			printf("hello,%c%c%c%c%c\n",ch3,ch4,ch5,ch6,ch7);

//��ȣȭ ���� 
//printf("hello,%d%d%d%d%d",ch3,ch4,ch5,ch6,ch7);

return 0;
} 