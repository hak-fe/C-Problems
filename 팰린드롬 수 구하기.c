#include <stdio.h>
#include <math.h>

	int main() {

		int input, length = 0, flag = 0, repos1 = 0, repos2 = 0;

		do {
			scanf_s("%d", &input);
			if (input > 0 && input < 10)
			{
				printf("yes\n");
				flag = 1;
			}
			else if (input != 0) {											// 자릿수 구하는 과정 ~ 시작 / 0이 아닐경우 시작
				flag = 1;												//flag변수로 반복문 진행 여부 판단
				for (int div = 1;; div *= 10)
				{
					if (div <= input && input / div != 0)
					{
						length++;
					}
					else {
						break;
					}
				}														// 자리수 구하기 끝 (성공 확인)
				
				if (length % 2 == 1) {
					repos1 = input / pow(10, (length + 1) / 2);
					repos2 = input % (int)pow(10, length / 2);
					if (length > 3) {
						repos1 = (repos1 / 10) + (repos1 % 10 * 10);
					}
					if (repos1 == repos2 && input >= 10) {
						printf("yes\n");
						repos2 = 0;
						repos1 = 0;
						length = 0;
					}
					else {
						printf("no\n");
						repos1 = 0;
						repos2 = 0;
						length = 0;
					}
				}
				else if (length % 2 == 0) {
					repos1 = input / pow(10, length / 2);
					repos2 = input % (int)pow(10, length / 2);
					if (length > 2) {
						repos1 = (repos1 / 10) + (repos1 % 10 * 10);
					}
					if (repos1 == repos2) {
						printf("yes\n");
						repos2 = 0;
						repos1 = 0;
						length = 0;
					}
					else {
						printf("no\n");
						repos1 = 0;
						repos2 = 0;
						length = 0;
					}
				}
			}
			else{
				flag = 0;
			}
		} while (flag);
		return 0;
	}
