#include <stdio.h>
#include <math.h>

int main() {

	int input, length = 0, sum1 = 0, sum2 = 0, repository1, repository2, cnt1 = 1, cnt2 = 1, ori_repos1 = 0, ori_repos2 = 0, flag=0;

	do {
		printf("���ϴ� �� �Է� : ");
		scanf_s("%d", &input);
		if (input != 0) {											// �ڸ��� ���ϴ� ���� ~
			flag = 1;												//flag������ �ݺ��� ���� ���� �Ǵ�
			for (int div = 1; ; div *= 10)
			{
				if (div <= input && input / div != 0)
				{
					length++;
				}
				else if (div >= input && input / div == 0 || input / div != 0) {

					break;
				}
			}														// ~�ڸ��� ���ϴ� ���� ��

			if (length % 2 == 0) {							// ¦���ڸ� ���� �ԷµǾ� �Ӹ���� ���� ���ϴ� ��� ~ (ex : 1221)

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
				}										// ~¦���ڸ� ���� �ԷµǾ� �Ӹ���� ���� ���ϴ� ��� / ��

			}
			else {										// Ȧ���ڸ� ���� �ԷµǼ� �Ӹ���� ���� ���ϴ� ��� ~ (ex : 12421)

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
			}											// ~ Ȧ���ڸ� ���� �ԷµǼ� �Ӹ���� ���� ���ϴ� ��� / ��
		}
		else {											// 0�� input�� �ԷµǸ� flag�� 0�� �Ǹ� �ݺ����� ����
			flag = 0;
		}
	} while (flag == 1);								// 1�� input�� �ԷµǸ� flag�� 1�� �Ǹ� ó������ ���ư��� �ݺ����� �����
	return 0;
}