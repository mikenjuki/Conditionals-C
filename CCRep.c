#include <stdio.h>

int CounterControlledRep()
{
	// initialize variables
	int total = 0, average, counter = 1, points;
	
	while (counter <= 10)
	{
		printf("Enter subject points (in percentage): ");
		if (scanf_s("%d", &points) == 0)
		{
			printf("Input error or invalid input.\n");
			return 1; //  exit the program 
		}

		total += points;
		counter++;
	}

	average = total / 10;
	return average;
	
}