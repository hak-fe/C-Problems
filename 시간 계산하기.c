#include <stdio.h>

int main() {

	int H = 0, M = 0;

	scanf_s("%d%d", &H, &M);
	if (H >= 0 && H <= 23 && M >= 0 && M <= 59)
	{
		if (H == 0 && M==0) {
			H = 23;
			M = 60 - 45;
			printf("%d %d", H, M);
		}
		else if (M <= 59 && M >= 45) {
			M -= 45;
			printf("%d %d", H, M);
		}
		else if (M < 45 && M >= 0) {
			H -= 1;
			if (H < 0) {
				H = 23;
			}
			M = 60 + M - 45;
			printf("%d %d", H, M);
		}
	}
	else {
	
	}
	return 0;
}