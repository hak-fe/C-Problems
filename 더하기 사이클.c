#include <stdio.h>

int main() {

	int input = 0, ori_input = 0, cnt = 0, sum = 0;

	scanf_s("%d", &input);

	ori_input = input;

	if (input == 0) 
	{
		printf("%d", 1);
	}
	else if(input > 0 && input <= 99) 
	{
		for (;input != sum; cnt ++){
			sum = 0;
			sum += input / 10;							    	
			sum += input % 10;								
			input = ((input % 10) * 10) + sum % 10;	
			sum = ori_input;
		}
		printf("%d", cnt);
	}
	return 0;
}