#include <stdio.h>

int main() {

	int num_of_people, rank[200];
	int weight[200] = { 0 }, height[200] = { 0 };

	scanf_s("%d", &num_of_people);

	for (int i = 0; i < num_of_people; i++)
	{
		scanf_s("%d%d", &weight[i], &height[i]);
	}
	
	for (int j = 0; j < num_of_people; j++)
	{
		rank[j] = 1;
		for (int k = 0; k < num_of_people; k++)
		{
			if (weight[j] < weight[k] && height[j] < height[k]) {
				rank[j]++;
			}
		}
		printf("%d ", rank[j]);
	}
	
	return 0;
}