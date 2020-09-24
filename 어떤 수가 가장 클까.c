#include <stdio.h>

int main() {

	double n1, n2, n3;

	printf("세 가지 수를 입력하세요. : ");
	scanf_s("%lf%lf%lf", &n1, &n2, &n3);

	if (n1 == n2 || n2 == n3 || n3 == n1) {

		printf("각각 다른 수를 입력해주세요!\n");
	}
	else {
		if (n1 > n2 && n1 > n3) {

			printf("가장 큰 수는 첫번째 수(%.3lf)입니다.\n", n1);
			if (n2 > n3) {
				printf("가장 작은 수는 세번째 수(%.3lf)입니다.\n", n3);

			}
			else
			{
				printf("가장 작은 수는 두번째 수(%.3lf)입니다.\n", n2);

			}

		}
		else if (n2 > n1 && n2 > n3) {

			printf("가장 큰 수는 두번째 수(%.3lf)입니다.\n", n2);
			if (n1 > n3) {
				printf("가장 작은 수는 세번째 수(%.3lf)입니다.\n", n3);

			}
			else
			{
				printf("가장 작은 수는 첫번째 수(%.3lf)입니다.\n", n1);

			}

		}
		else if (n3 > n1 && n3 > n2)
		{
			printf("가장 큰 수는 세번째 수(%.3lf)입니다.\n", n3);
			if (n1 > n2) {
				printf("가장 작은 수는 두번째 수(%.3lf)입니다.\n", n3);

			}
			else
			{
				printf("가장 작은 수는 첫번째 수(%.3lf)입니다.\n", n2);

			}
		}
	}
}