#include <stdio.h>

int main(){

	int n, sum = 0, repos;
	printf("네 자리 수 입력 : ");
	scanf_s("%d", &n);

	if (n < 10000)
	{
		repos = n / 1000;
		sum += repos;		  //천의 자리 수를 sum에 더함
		n = n - repos * 1000; //n은 백의 자리 수로 존재

		repos = n / 100;		 //백의 자리 수를 sum에 더함
		sum += repos;
		n = n - repos * 100;	//n은 십의 자리 수로 존재

		repos = n / 10;		 //십의 자리 수를 sum에 더함
		sum += repos;
		n = n - repos * 10;	//n은 일의 자리 수로 존재

		repos = n / 1;		 //일의 자리 수를 sum에 더함
		sum += repos;
		n = n - repos * 1; //끝

		printf("네 자리수의 합은 %d입니다.", sum);
	}
	else
		printf("네 자리수를 입력해주세요.");

}