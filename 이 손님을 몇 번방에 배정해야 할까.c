#include <stdio.h>

int main() {

	int H, W, N, T = 0;							//H : ȣ���� ����ȣ ,W : ȣ���� ���ǹ�ȣ , N : N��° ��� , T : �ݺ� Ƚ�� 

	scanf_s("%d", &T);

	for (int i = 0;i < T; i++) {
	
		scanf_s("%d%d%d", &H, &W, &N);
		if (N % H == 0) {
			printf("%d\n", (H * 100) + (N / H));
		}
		else {
			printf("%d\n", (N % H * 100) + (N / H + 1));
		}
	}
	return 0;
}