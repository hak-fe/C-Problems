#include <stdio.h>

int main() {
	int cnt = 0, const_price, changing_price, labtop_price;

	scanf_s("%d%d%d", &const_price, &changing_price, &labtop_price);

	if (changing_price >= labtop_price) {									// 손익분기점을 계산할 수 없는 경우
		printf("%d", -1);
	}
	else if (changing_price < labtop_price) {
		
		cnt = const_price / (labtop_price - changing_price) + 1;
		printf("%d", cnt);
	}
	return 0;
}