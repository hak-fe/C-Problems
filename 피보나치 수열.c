#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {	
	int n, temp1 = 0, temp2 = 0, sum = 0;
	scanf_s("%d", &n);

		//2번째 부터 시작
	for (int i = 0; i <= n; i++)
	{
		temp2 = temp1;
		temp1 = sum;
		if (i == 0) {
			sum = 0;
			temp1 = 0;
		}
		else if (i == 1) {
			sum = 1;
			temp2 = 1;
		}
		else {
			sum = temp1 + temp2;
		}
	}
	printf("%d", sum);
	
	return 0; 
}