#include <stdio.h>

int main() {

	int input_num, sum= 0;

	scanf_s("%d", &input_num);

	for (int start_num = 1; start_num <= input_num; start_num++) {
		sum += start_num;
	}
	printf("%d", sum);

	return 0;
}