#include <stdio.h>
#include <limits.h>

int main(void)
{
	int num1 = 0;
	int i = 0;
	int num2 = 0;
	int div_cnt = 0;
	// 4. 3������ �̾�����  1���� int_max ���� ������ �Ҽ�ã��.

	for (num1 = 1; num1 < 100; num1++)
	{
		//		printf("%dȸ��\n",num1);
		//		printf("-------------------\n");
		div_cnt = 0;
		num2 = num1;

		for (i = 2; i < num2; i++)
		{
			if (num2 % i == 0)
			{
				// ���� ��i�� ���
				// printf("%d\n",i);

				// num1�� i ���� ���� ����
				num2 = num2 / i;

				// i�� 2�� �ʱ�ȭ ��
				i = 1;

				// ������ �������� ���� ī��Ʈ
				div_cnt = div_cnt + 1;
				// �ѹ��̶� ������ ���ٸ� �ݺ��� ����.
				break;
			}
		}
		if (div_cnt == 0)
		{
			printf("-------------\n");
			printf("%d �� �Ҽ��Դϴ�.\n", num1);
		}
	}
	return 0;
}
