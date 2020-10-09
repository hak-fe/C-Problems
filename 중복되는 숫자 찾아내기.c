#include <stdio.h>

int main() {

	int time, input_num, sum1 = 0, sum2 = 0, res;
	scanf_s("%d", &time);

	for (int i = 1; i <=time; i++)
	{
		scanf_s("%d", &input_num);
		sum1 += input_num;
	}
	
	for (int j = 1; j < time; j++)
	{
		sum2 += j;
	}

	res = sum1 - sum2;

	printf("%d", res);

	return 0;
}