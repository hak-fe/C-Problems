#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void) {
	
	int time, snack = 0;
	char ch[SIZE], provide[] = "provide", eat[] = "eat", size[] = "size";
	scanf_s("%d", &time);
	getchar();
	for (int i = 0; i < time; i++)
	{
		scanf("%s", ch);

		if (strcmp(ch, provide) == 0)
			snack++;
		else if (strcmp(ch, eat) == 0)
			if (snack == 0)
				printf("empty\n"); 
			else
				snack--;
		else if (strcmp(ch, size) == 0)
			if (snack == 0)
				printf("empty\n");
			else
				printf("%d\n", snack);
	}

	return 0;
}

