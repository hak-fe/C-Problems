#include <stdio.h> 

int main()
{
	int user_input, user_clap_input, user_life_cnt  = 0;
	printf("Computer : 369������ �����Ұ�!\n\n");

	int i = 1;
	while (1)
	{
	/*================================��ǻ�� ����==============================*/
		int com_num = i; // i�� ������ �� �� �����Ƿ� i��� ������ �� ���� ����
		int user_num = i + 1;// ~����ڿ�~ i�� ������ �� �� �����Ƿ� i��� ������ �� ���� ����
		int com_how_many_TSN = 0; // 369�� ���� - ��ǻ�Ϳ�
		int user_how_many_TSN = 0; // 369�� ���� - ����ڿ�
		while (1) 
		{ 
			if (com_num % 10 == 3 || com_num % 10 == 6 || com_num % 10 == 9)
			{
				com_how_many_TSN++;
			}
			com_num /= 10;
			if (com_num <= 0)
			{
				break;
			}
		}
		if (com_how_many_TSN == 0) //369�� ���� ���
		{
			printf("computer : %d\n", i);
		}// i�� �׳� ���
		else//������
			printf("�ڼ� %d��!\n", com_how_many_TSN);

	/*================================��ǻ�� ��==============================*/

	/*================================����� ����==============================*/

		while (1)
		{
			if (user_num % 10 == 3 || user_num % 10 == 6 || user_num % 10 == 9)
			{
				user_how_many_TSN++;
			}
			user_num /= 10;
			if (user_num <= 0)
			{
				break;
			}
		}
		if (user_how_many_TSN != 0) //369�� ���� ���
		{
			printf("user : ");
			scanf_s("%d", &user_input); // �ڼ� ģ�ٴ� �ǹ��� 1�� �Է¹���
			printf("�ڼ� ġ�� Ƚ����? >>  ");
			scanf_s("%d", &user_clap_input); // �ڼ� �� �� ĥ����?

			if (user_input != 1 || user_clap_input != user_how_many_TSN)
			{// �ڼ� ģ�ٴ� �ǹ��� 1�� ó�� ����, �ڼ� ģ�ٰ� �Է��� Ƚ���� 369������ ���� �ʴٸ�
				printf("\n%d�� ��Ƴ��ҳ�! �����߾�!\n", user_life_cnt);
				// �� �� ��Ƴ��Ҵ��� ����ϰ� ������ ������.
				break;
			}
			else // �� ������ ��Ƴ��� Ƚ���� 1 ������Ų��.
			{
				user_life_cnt++;
			}
		}
		else //369�� ���� ���
		{
			printf("user : ");
			scanf_s("%d", &user_input); // ����ڿ� �ش�Ǵ� ���ڸ� �Է� i + 1
			if (user_input == i + 1) //������ �ùٸ��� �Է� ������ ������ ī��Ʈ ���� 
			{
				user_life_cnt++;
			}
			else // �ùٸ��� �Է����� �������� ��Ƴ��� Ƚ�� ����ϰ� ����
			{
				printf("\n%d�� ��Ƴ��ҳ�! �����߾�!\n", user_life_cnt);
				break;
			}
		}
	/*================================����� ��==============================*/
		i+=2;
	}
	return 0;
}