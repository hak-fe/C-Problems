#include <stdio.h>

int main() {

	int pizza_piece, a_pizza, people;

	printf("�Դ� ����� �� ���ΰ���? : ");
	scanf_s("%d", &people);
	printf("���� �� ���� ������ �ֳ���? : ");
	scanf_s("%d", &a_pizza);

	pizza_piece = a_pizza * 8;

	printf("================================\n");

	if (people > pizza_piece) {
		printf("�������ô�!!!!\n");
	}
	else {
		printf("������� %d������ ���� �� �ְڱ���!\n", pizza_piece / people);
		printf("���� ���������� %d �ǽ��Դϴ�.\n", pizza_piece % people);
	}

	return 0;

	//���۷δ� ���ڴ� ���� ���ֽ��ϴ�.
}