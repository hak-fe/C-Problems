#include <stdio.h>
#include <math.h>

int main() {

	int input, length = 0, sum1 = 0, sum2 = 0, repository1, repository2, cnt1 = 1, cnt2 = 1, ori_repos1 = 0, ori_repos2 = 0, flag=0;

	do {
		printf("원하는 값 입력 : ");
		scanf_s("%d", &input);
		if (input != 0) {											// 자릿수 구하는 과정 ~
			flag = 1;												//flag변수로 반복문 진행 여부 판단
			for (int div = 1; ; div *= 10)
			{
				if (div <= input && input / div != 0)
				{
					length++;
				}
				else if (div >= input && input / div == 0 || input / div != 0) {

					break;
				}
			}														// ~자릿수 구하는 과정 끝

			if (length % 2 == 0) {							// 짝수자리 수가 입력되어 팰린드롬 수를 구하는 경우 ~ (ex : 1221)

				repository1 = input / pow(10, length / 2);
				repository2 = input % (int)pow(10, length / 2);

				ori_repos1 = repository1;
				ori_repos2 = repository2;

				for (; cnt1 <= length / 2; cnt1++)
				{
					sum1 += repository1 % 10;
					repository1 /= 10;
				}
				for (; cnt2 <= length / 2; cnt2++)
				{
					sum2 += repository2 % 10;
					repository2 /= 10;
				}
				if (sum1 == sum2 && ori_repos1 != ori_repos2) {
					printf("yes\n");
					repository1 = 0;
					repository2 = 0;
					input = 0;
					length = 0;
					sum1 = 0;
					sum2 = 0;
					cnt1 = 0;
					cnt2 = 0;
				}
				else {
					printf("no\n");
					repository1 = 0;
					repository2 = 0;
					input = 0;
					length = 0;
					sum1 = 0;
					sum2 = 0;
					cnt1 = 0;
					cnt2 = 0;
				}										// ~짝수자리 수가 입력되어 팰린드롬 수를 구하는 경우 / 끝

			}
			else {										// 홀수자리 수가 입력되서 팰린드롬 수를 구하는 경우 ~ (ex : 12421)

				repository1 = input / pow(10, (length + 1) / 2);
				repository2 = input % (int)pow(10, length / 2);

				ori_repos1 = repository1;
				ori_repos2 = repository2;

				for (; cnt1 <= length / 2; cnt1++)
				{
					sum1 += repository1 % 10;
					repository1 /= 10;
				}
				for (; cnt2 <= length / 2; cnt2++)
				{
					sum2 += repository2 % 10;
					repository2 /= 10;
				}
				if (sum1 == sum2 && ori_repos1 != ori_repos2) {
					printf("yes\n");
					repository1 = 0;
					repository2 = 0;
					input = 0;
					length = 0;
					sum1 = 0;
					sum2 = 0;
					cnt1 = 0;
					cnt2 = 0;
				}
				else {
					printf("no\n");
					repository1 = 0;
					repository2 = 0;
					input = 0;
					length = 0;
					sum1 = 0;
					sum2 = 0;
					cnt1 = 0;
					cnt2 = 0;
				}
			}											// ~ 홀수자리 수가 입력되서 팰린드롬 수를 구하는 경우 / 끝
		}
		else {											// 0이 input에 입력되면 flag가 0이 되며 반복문을 종료
			flag = 0;
		}
	} while (flag == 1);								// 1이 input에 입력되면 flag가 1이 되며 처음으로 돌아가서 반복문을 재시작
	return 0;
}