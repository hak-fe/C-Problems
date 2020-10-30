#include <stdio.h> 

int main()
{
	int user_input, user_clap_input, user_life_cnt  = 0;
	printf("Computer : 369게임을 시작할게!\n\n");

	int i = 1;
	while (1)
	{
	/*================================컴퓨터 시작==============================*/
		int com_num = i; // i를 만지작 할 수 없으므로 i대신 만지작 할 변수 생성
		int user_num = i + 1;// ~사용자용~ i를 만지작 할 수 없으므로 i대신 만지작 할 변수 생성
		int com_how_many_TSN = 0; // 369의 갯수 - 컴퓨터용
		int user_how_many_TSN = 0; // 369의 갯수 - 사용자용
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
		if (com_how_many_TSN == 0) //369가 없을 경우
		{
			printf("computer : %d\n", i);
		}// i값 그냥 출력
		else//있으면
			printf("박수 %d번!\n", com_how_many_TSN);

	/*================================컴퓨터 끝==============================*/

	/*================================사용자 시작==============================*/

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
		if (user_how_many_TSN != 0) //369가 있을 경우
		{
			printf("user : ");
			scanf_s("%d", &user_input); // 박수 친다는 의미인 1을 입력받음
			printf("박수 치는 횟수는? >>  ");
			scanf_s("%d", &user_clap_input); // 박수 몇 번 칠낀데?

			if (user_input != 1 || user_clap_input != user_how_many_TSN)
			{// 박수 친다는 의미인 1이 처음 없고, 박수 친다고 입력한 횟수가 369갯수와 같지 않다면
				printf("\n%d번 살아남았네! 수고했어!\n", user_life_cnt);
				// 몇 번 살아남았는지 출력하고 게임을 끝낸다.
				break;
			}
			else // 잘 쳤으면 살아남은 횟수를 1 증가시킨다.
			{
				user_life_cnt++;
			}
		}
		else //369가 없을 경우
		{
			printf("user : ");
			scanf_s("%d", &user_input); // 사용자에 해당되는 숫자를 입력 i + 1
			if (user_input == i + 1) //유저가 올바르게 입력 했으면 라이프 카운트 증가 
			{
				user_life_cnt++;
			}
			else // 올바르게 입력하지 못했으면 살아남은 횟수 출력하고 종료
			{
				printf("\n%d번 살아남았네! 수고했어!\n", user_life_cnt);
				break;
			}
		}
	/*================================사용자 끝==============================*/
		i+=2;
	}
	return 0;
}