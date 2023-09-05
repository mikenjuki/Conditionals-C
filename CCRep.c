#include <stdio.h>

int CounterControlledRep()
{
	// initialize variables
	int total = 0, average, counter = 1, grade;

	while (counter <= 10)
	{
		printf("Enter subject points (in percentage): ");

		if (scanf_s("%d", &grade) == 0)
		{
			printf("Input error or invalid input.\n");
			return 1; //  exit the program 
		}


		total += grade;
		counter++;
	}

	average = total / 10;
	return average;

}