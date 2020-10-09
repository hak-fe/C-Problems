#include <stdio.h> 

int main(void) {

	int time, stu_num, stu_score, sum = 0, cnt = 0;
	double avr = 0, percent;
	char score[1001];

	scanf_s("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf_s("%d", &stu_num);
		for (int j = 0; j < stu_num; j++)
		{
			scanf_s("%d", &stu_score);
			score[j] = stu_score;
			sum += score[j];
		}
		avr = sum / stu_num;
		for (int k = 0; k < stu_num ; k++)
		{
			if (score[k] > avr)					//평균 넘는 친구들 카운트
				cnt++;
			
		}
		percent = ((double)cnt / (double)stu_num) * 100;
		printf("%.3lf%%\n", percent);
		sum = 0, cnt = 0;
	}

	return 0;
}