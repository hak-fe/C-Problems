#include <stdio.h>

int main() {
	int input, ori_res, res = 1, cnt = 0, div = 10;		//A, B, C�� ��� 100���� ���ų� ũ��, 1,000���� ���� �ڿ����̴�.

	for (int time = 1; time < 4; time++)									// input�� 3���Է�
	{
		scanf_s("%d", &input);
		res *= input;													//res�� input�� ������ 3��
		input = 0;
	}

	ori_res = res;

	for (int i = 0; i < 10; i++)													//0���� 9���� �� 10�� �ݺ�
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