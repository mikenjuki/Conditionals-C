#include <stdio.h>

void ifCondition()
{
	int grade;
	
	printf("Enter grade percentage: ");
	if (scanf_s("%d", &grade) == 0)
	{
		printf("Input error or invalid input.\n");
		return 1; //  exit the program 
	}
	

	if (grade >= 60)
		printf("You Passed! \n");
	else
		printf("You Failed! \n");
}