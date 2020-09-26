#include <stdio.h>

int main() {

	int Multi_table;

	scanf_s("%d", &Multi_table);
	if (Multi_table >= 1 && Multi_table <= 9) {
		for (int cnt = 1; cnt < 10; cnt++)
		{
			printf("%d * %d = %d\n", Multi_table, cnt, Multi_table * cnt);
		}
	}
	else
	{

	}
	return 0;

}