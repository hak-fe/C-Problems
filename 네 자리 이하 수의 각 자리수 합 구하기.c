#include <stdio.h>

int main() {

	int Unknown_num, sum = 0, div = 1;
	printf("�� �ڸ� ������ ���� �Է��ϼ��� : ");
	scanf_s("%d", &Unknown_num);						//unknown_num�� �� �ڸ� ������ �Է� �޴� ��. (���� 'un'���� ��.)

	if (Unknown_num >= 0 && Unknown_num < 10000){
			
			while (Unknown_num / div != 0)				//un�� 10���� ��� ������ ��, ���� 0�̸� �� ���� �������� sum�� ���ϰ� �ݺ����� ����.
			{
				sum += Unknown_num % 10;
				Unknown_num /= 10;						// �ڸ� �� ����� �����ٸ�, un�� ��� ����ߴ� ���� ���� un�� �ٽ� ������. 
														// ex) 150�� 10���� ó�� ������ �� 10, ������ 0�� ���ߴٰ� ���� ���, ���� un�� �ٽ� �����ϰ�,
														// �������� sum�� ���Ѵ�.
			}

			printf("�ڸ� ���� ���� %d�Դϴ�.", sum);
	}
	else
	{
		printf("0�̻� 10000�̸��� ���� �Է����ּ���!\n");
	}

	return 0;

}