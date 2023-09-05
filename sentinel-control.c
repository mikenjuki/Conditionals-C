#include <stdio.h>

int sentinelControl()
{
	// Class average program with sentinel-controlled repetition
	float average;
	int counter, grade, total, result;

	// initialize variables
	total = 0;
	counter = 0;

	// process
	do {
		printf("Enter grades here. To end program enter -1: ");
		result = scanf_s("%d", &grade);
		if (grade != -1) {
			total += grade;
			counter++;
		}
	} while (result == 1 && grade != -1);

	if (result != 1) {
		printf("Error: Invalid input data type. Start Again! \n");
	}

	// termination phase
	if (counter != 0)
	{
		average = (float)total / counter;
		printf("Class average is %.2f", average);
	}
	else
	{
		printf("No grades were entered. \n");
	}
	return 0;
}