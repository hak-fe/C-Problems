#include <stdio.h>
#include <math.h>
int main() {

	int x1, x2, x3, y1, y2, y3;
	double sum = 0;

	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);


	if (x1 == x2 || x2 == x3 || x3 == x1) {
		printf("-1");
	}
	else {

		sum = 0.5 * ((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3));

		printf("%.1lf", fabs(sum));

	}

	return 0;
}
