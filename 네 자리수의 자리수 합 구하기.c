#include <stdio.h>

int main(){

	int n, sum = 0, repos;
	printf("�� �ڸ� �� �Է� : ");
	scanf_s("%d", &n);

	if (n < 10000)
	{
		repos = n / 1000;
		sum += repos;		  //õ�� �ڸ� ���� sum�� ����
		n = n - repos * 1000; //n�� ���� �ڸ� ���� ����

		repos = n / 100;		 //���� �ڸ� ���� sum�� ����
		sum += repos;
		n = n - repos * 100;	//n�� ���� �ڸ� ���� ����

		repos = n / 10;		 //���� �ڸ� ���� sum�� ����
		sum += repos;
		n = n - repos * 10;	//n�� ���� �ڸ� ���� ����

		repos = n / 1;		 //���� �ڸ� ���� sum�� ����
		sum += repos;
		n = n - repos * 1; //��

		printf("�� �ڸ����� ���� %d�Դϴ�.", sum);
	}
	else
		printf("�� �ڸ����� �Է����ּ���.");

}