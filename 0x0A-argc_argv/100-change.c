#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: arguments
 * @argv: array
 * Return: 0 (correct), 1 (fail)
 */
int main(int argc, char *argv[])
{
	int x, y, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Errror\n");
		return (1);
	}
	x = atoi(argv[1]);
	answer = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && x >= 0; x++)
	{
		while (x >= coins[y])
		{
			answer++;
			x -= coins[y];
		}
	}
	printf("%d\n", answer);
	return (0);
}
