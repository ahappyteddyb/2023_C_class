#include <stdio.h>

int main (void)
{
	
// 당신은 대학교 전산실에 취업을 했다.
// 키보드로 점수를 입력받아 화면에 A+, A0, B+, B0, C+, C0, D, F 를 출력하려고 합니다.
// A+ : 95점 이상, A0 : 94~90점 이상 
// B+ : 89~85점 이상, B0 : 84~80점 이상
// C+ : 79~75점 이상, C0 : 74~70점 이상
// D : 69~60점 이상 , F : 60점 미만
// 이 조건을 충족하는 프로그램을 작성하시오.
// 점수는 변수 score 에 배정 하시오. 
	int score;
	char grade = 0;
	char grade2 = 0;
		printf ("점수를 입력 하세요 : ");
			scanf("%d", &score);

	if (score>100)
	{
		printf ("점수를 잘못 입력 했습니다. 다시 입력 하세요.", score);
		printf ("점수를 입력 하세요 : ");
			scanf ("%d", &score);
	}

	 if (score>=95)
	 {
		grade = 'A';
		grade2 = '+';
	}

		else if (score>=90)
		{
			grade = 'A';
			grade2 = '0';
	}

		else if (score>=85)
		{
			grade = 'B';
			grade2 = '+';
	}

		else if (score>=80)
		{
			grade = 'B';
			grade2 = '0';
	}

		else if (score>=75)
		{
			grade = 'C';
			grade2 = '+';
	}

		else if (score>=70)
		{
			grade = 'C';
			grade2 = '0';
	}

		else if (score>=60)
		{
			grade = 'D';
	}

		else if (score<60)
		{
			grade = 'F';
	}

		printf ("당신의 점수는 %c%c 입니다.",grade,grade2);
	// else if 대신 if(score <= 89 && score >=85)를 사용해야 정석인 방법이다. 
	
return 0;
} 
