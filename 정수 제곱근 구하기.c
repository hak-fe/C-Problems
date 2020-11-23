#include <stdio.h>
#include <math.h>

int main(void) {

	unsigned long long int n;

	scanf_s("%llu", &n);

	if((unsigned long long int)sqrt(n) * (unsigned long long int)sqrt(n) == n)
		printf("%llu", (unsigned long long int)sqrt(n));
	else
		printf("%llu", (unsigned long long int)sqrt(n) + 1);

	return 0;
}