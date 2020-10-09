#include <stdio.h>

int main()										//23 59 59 + 1 = 0 0 0
{

	int H, M, S, want_sec;
	scanf("%d%d%d", &H, &M, &S);
	scanf("%d", &want_sec);

	
	S += want_sec;												

	if (S > 59) {
	
		M += S / 60;
		S = S % 60;

	}
	if (M > 59) {
		
		H += M / 60;
		M = M % 60;
	
	}
	if (H > 23) {

		H %= 24;
	
	}
	printf("%d %d %d", H, M, S);

	return 0;
	}
