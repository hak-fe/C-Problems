#include <stdio.h>

int main() {

	int input_num1, input_mun2, flag = 0;

	do
	{
		scanf_s("%d%d", &input_num1, &input_mun2);

		if (input_num1 > 0 && input_mun2 < 10) {
			
			printf("%d\n", input_num1 + input_mun2);

			flag = 1;
		}
		else {
			flag = 0;
		}
	} while (flag == 1);

	return 0;
}