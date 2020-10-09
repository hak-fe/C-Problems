#include <stdio.h>

int main()
{
	char grade1;
	char grade2;
	double score = 0;
	scanf("%c%c", &grade1,&grade2);

	switch (grade1)
	{
	case 'A':
		score = 4.0;
		if (grade2 == '+')
			score += 0.3;
		else if (grade2 == '0')
			score = score;
		else
			score -= 0.3;
		printf("%.1lf", score);
		break;
	case 'B':
		score = 3.0;
		if (grade2 == '+')
			score += 0.3;
		else if (grade2 == '0')
			score = score;
		else
			score -= 0.3;
		printf("%.1lf", score);
		break;
	case 'C':
		score = 2.0;
		if (grade2 == '+')
			score += 0.3;
		else if (grade2 == '0')
			score = score;
		else
			score -= 0.3;
		printf("%.1lf", score);
		break;
	case 'D':
		score = 1.0;
		if (grade2 == '+')
			score += 0.3;
		else if (grade2 == '0')
			score = score;
		else
			score -= 0.3;
		printf("%.1lf", score);
		break;

	default:
		printf("0.0");
		break;
	}
	
	return 0;
	}