#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int n;
	
	n = 98; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf(n, "%i is positive\n");
	else if (n < 0)
		printf(n, "%i is negative\n");

	return (0);
}
