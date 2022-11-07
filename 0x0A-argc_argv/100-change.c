#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the minimum number of coins
 * @argc: arg count
 * @argv:arguements
 * Return:Always 0
 */
int main(int argc, char *argv[])
{
	int amount, change, i, numcoins;
	int coins[] = {25, 10, 5, 2, 1};

	amount = change = i = numcoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[i] != '\0')
	{
		if (amount >= coins[i])
		{
			numcoins = amount / coins[i];
			change = change + numcoins;
			amount = amount - numcoins * change;
		}
		i++;
	}
	printf("%d\n", numcoins);
	return (0);
}
