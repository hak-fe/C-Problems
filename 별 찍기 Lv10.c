#include <stdio.h>

int main() 
{

	int n;
	scanf_s("%d", &n);

	if (n % 2 == 1) {														// n이 홀수 인 경우
		for (int wi = 1; wi <= n; wi++)
		{
			printf("*");
		}
		printf("\n");

		for (int t1 = 1; t1 <= n / 2; t1++)
		{
			for (int s1 = t1; s1 <= n / 2; s1++)
			{
				printf("*");
			}
			for (int e1 = 1; e1 <= 2 * t1 - 1; e1++)
			{
				printf(" ");
			}
			for (int s2 = t1; s2 <= n / 2; s2++)
			{
				printf("*");
			}
			printf("\n");
		}

		int cnt1 = 0;

		for (int t2 = 1; t2 <= n / 2 - 1; t2++)
		{

			for (int s3 = t2; s3 <= 2 * t2; s3++)
			{
				printf("*");
			}
			for (int e2 = 1; e2 <= n - (4 + cnt1); e2++)
			{
				printf(" ");
			}
			cnt1 += 2;
			for (int s4 = t2; s4 <= 2 * t2; s4++)
			{
				printf("*");
			}
			printf("\n");

		}
		for (int a_re = 1; a_re <= n; a_re++)
		{
			printf("*");
		}
	}
	else {																// n이 짝수인 경우

			for (int t1 = 1; t1 <= n / 2; t1++)
			{
				for (int e1 = t1; e1 < n / 2; e1++)
				{
					printf("*");
				}
				for (int s1 = t1; s1 <= t1; s1++)
				{
					printf("*");
				}
				if (t1 != 1) {
					for (int e2 = n - (n - 1); e2 < 2 * t1 - 1; e2++)					
					{
						printf(" ");
					}
				}
				for (int s2 = t1; s2 <= t1; s2++)
				{
					printf("*");
				}
				for (int e1 = t1; e1 < n / 2; e1++)
				{
					printf("*");
				}
				printf("\n");
			}
			for (int t2 = 1; t2 <= n / 2; t2++)
			{
				if (t2 != 1) {
					for (int e3 = n - (n - 1); e3 <= t2 - 1; e3++)
					{
						printf("*");
					}
				}
				for (int s3 = t2; s3 <= t2; s3++)
				{
					printf("*");
				}
				for (int e4 = n - (n - 1); e4 <= n - 2 * t2; e4++)
				{
					printf(" ");
				}
				for (int s4 = t2; s4 <= t2; s4++)
				{
					printf("*");
				}
				for (int e3 = n - (n - 1); e3 <= t2 - 1; e3++)
				{
					printf("*");
				}
				printf("\n");
			}
			return 0;
		}
	}
	

