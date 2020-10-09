#include <stdio.h>

int main() {

	int time, A, B, C;
	scanf_s("%d", &time);

	for (int i = 1; i <= time; i++)
	{
		scanf_s("%d%d%d", &A, &B, &C);
		printf("Scenario #%d:\n", i);
		if (A * A + B * B == C * C)
		{
			printf("yes\n");
		}
		else if (C * C + B * B == A * A) 
		{
			printf("yes\n");
		}
		else if (A * A + C * C == B * B) 
		{
			printf("yes\n");
		}
		else
			printf("no\n");
		printf("\n");
	}

	return 0;
}