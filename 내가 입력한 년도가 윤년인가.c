#include <stdio.h>

int main() {												// 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다.

	int input_year = 0;

	scanf_s("%d", &input_year);

	if (input_year >= 1 && input_year <= 4000) {
		if (input_year % 4 == 0 && input_year % 100 != 0 || input_year % 400 == 0) {
			printf("1");
		}
		else {
			printf("0");
		}
	
	}
	else
	{

	}

	return 0;
}