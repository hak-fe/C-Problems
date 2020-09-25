#include <stdio.h>

int main() {

	int Unknown_num, sum = 0, div = 1;
	printf("네 자리 이하의 수를 입력하세요 : ");
	scanf_s("%d", &Unknown_num);						//unknown_num은 네 자리 이하의 입력 받는 수. (이하 'un'으로 함.)

	if (Unknown_num >= 0 && Unknown_num < 10000){
			
			while (Unknown_num / div != 0)				//un을 10으로 계속 나눴을 때, 몫이 0이면 그 때의 나머지를 sum에 더하고 반복문을 끝냄.
			{
				sum += Unknown_num % 10;
				Unknown_num /= 10;						// 자릿 수 계산이 끝났다면, un에 방금 사용했던 수의 몫을 un에 다시 저장함. 
														// ex) 150을 10으로 처음 나눠서 몫 10, 나머지 0을 구했다고 예로 들면, 몫은 un에 다시 저장하고,
														// 나머지는 sum에 더한다.
			}

			printf("자리 수의 합은 %d입니다.", sum);
	}
	else
	{
		printf("0이상 10000미만의 값을 입력해주세요!\n");
	}

	return 0;

}