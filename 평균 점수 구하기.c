#include <stdio.h>

int main() {

	int score_of_students, sum = 0;

	for (int cnt = 0; cnt < 5; cnt++) {
	
		scanf_s("%d", &score_of_students);
		if (score_of_students >= 40 && score_of_students <= 100) {

			sum += score_of_students;
			score_of_students = 0;
		}
		else if (score_of_students >= 0 && score_of_students < 40)
		{
			sum += 40;
			score_of_students = 0;
		}
		else {
		
		}
	}
	printf("%d", sum / 5);
}