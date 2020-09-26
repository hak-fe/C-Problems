#include <stdio.h>

int main() {

	int input = 0, sum = 1;

	scanf_s("%d", &input);

	for (int cnt = 1; cnt <= input; cnt++) {
	
		sum *= cnt;
	}
	printf("%d", sum);

	return 0;
}