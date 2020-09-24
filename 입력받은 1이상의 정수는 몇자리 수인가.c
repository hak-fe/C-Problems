#include <stdio.h>


int main() {

	int input, cnt = 0;

	printf("1이상의 정수를 입력하세요. : ");
	scanf_s("%d", &input);						//input으로 값을 입력받는다.
	
	for (int div = 1; ; div *= 10)				// div는 1부터 10씩 곱해져 가며 증가한다 / 그리고 div는 input을 반복하며 나눈다.  
	{
		cnt++;									//div가 나눌 때 마다 cnt변수로 카운트를 세준다. 즉 자릿수를 의미한다.
		if (div >= input && input / div == 0)   
		{
			printf("%d 자리 수 입니다.", cnt-1);  // 결국 구하는 것은 자릿수를 의미하는 값이므로 cnt를 구해야 하는데, 왜 cnt-1을 했느냐면 
												 //if문의 조건이 충족 됐을 때는 input의 자릿수 + 1 이 cnt에 저장되어 진다. cnt를 한 후, if문으로 검사하기 때문이다.
			break;								// 다 됐으면 break로 빠져 나온다.
		}
	}
	return 0;
}