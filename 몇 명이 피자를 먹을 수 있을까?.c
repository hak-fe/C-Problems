#include <stdio.h>

int main() {

	int pizza_piece, a_pizza, people;

	printf("먹는 사람은 몇 명인가요? : ");
	scanf_s("%d", &people);
	printf("피자 몇 판을 가지고 있나요? : ");
	scanf_s("%d", &a_pizza);

	pizza_piece = a_pizza * 8;

	printf("================================\n");

	if (people > pizza_piece) {
		printf("돈좀씁시다!!!!\n");
	}
	else {
		printf("사람들은 %d조각씩 먹을 수 있겠군요!\n", pizza_piece / people);
		printf("남는 피자조각은 %d 피스입니다.\n", pizza_piece % people);
	}

	return 0;

	//페퍼로니 피자는 정말 맛있습니다.
}
