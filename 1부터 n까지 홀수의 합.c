#include <stdio.h>

int main() {

	int sum = 0, n;
	printf("1���� Ȧ���� ���� ���� ������ ���մϴ�. ������ ���ұ��?(ex: 100, 200, 1000) : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("1���� %d���� Ȧ���� ���� %d�Դϴ�.\n\n",n, sum);

	return 0;
}