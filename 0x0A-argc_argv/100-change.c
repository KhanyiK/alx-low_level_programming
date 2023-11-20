#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, answer;
	unsigned int y;
	char *z;
	int coins [] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Errror\n");
		return (1);
	}
	x = strtol(argv[1], &z, 10);
	answer = 0;

	if (!*z)
	{
		while (x > 1)
	{
	for (y = 0; y < sizeof(coins[y]); y++)
	{
		if (x >= coins[y])
		{
			answer += x / coins[y];
			x = x % coins[y];
		}
	}
	}
	if (x == 1)
	answer++;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", answer);
	return (0);
}
