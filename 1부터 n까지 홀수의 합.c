#include <stdio.h>

int main() {

	int sum = 0, n;
	printf("1부터 홀수를 구해 더할 범위를 정합니다. 어디까지 더할까요?(ex: 100, 200, 1000) : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("1부터 %d까지 홀수의 합은 %d입니다.\n\n",n, sum);

	return 0;
}