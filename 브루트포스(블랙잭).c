#include <stdio.h>

int main() {

	int card, max_sum, res_sum = 0, cmp_sum = 0, res = 0;
	int ary[100] = { 0 };

	scanf_s("%d%d", &card, &max_sum);

	for (int i = 0; i < card; i++)
	{
		scanf_s("%d", &ary[i]);
	}

	for (int i = 0; i < card; i++)
	{
		for (int j = i+1; j < card; j++)
		{
			for (int k = j+1; k < card; k++)
			{
				res_sum = ary[i] + ary[j] + ary[k];
				if (res_sum > cmp_sum && res_sum <= max_sum) {
					cmp_sum = res_sum;
					res = res_sum;
				}
			}
		}
	}
	printf("%d", res);
	return 0;
}


