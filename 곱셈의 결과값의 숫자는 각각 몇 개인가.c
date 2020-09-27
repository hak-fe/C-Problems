#include <stdio.h>

int main() {
	int input, ori_res, res = 1, cnt = 0, div = 10;		//A, B, C는 모두 100보다 같거나 크고, 1,000보다 작은 자연수이다.

	for (int time = 1; time < 4; time++)									// input값 3번입력
	{
		scanf_s("%d", &input);
		res *= input;													//res에 input값 곱연산 3번
		input = 0;
	}

	ori_res = res;

	for (int i = 0; i < 10; i++)													//0부터 9까지 총 10번 반복
	{
		for (; res / div != 0 || res % div > 0; res /= 10)
		{
			if (res % div == i) {
				cnt++; 
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
		res = ori_res;
	}

	return 0;
}