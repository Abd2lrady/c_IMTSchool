#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    // set random seed
    time_t t;
    srand(time(&t));

	const int CLASSES = 3;
	const int STUDENTS = 100;

	int passed = 0, highestGrade = 0, lowestGrade = 0, gradesSum = 0;

	// populate students with random grades from 0 till 100
	int school[CLASSES][STUDENTS];
	// traverse school classes
	for (int classRoom = 0; classRoom < CLASSES; classRoom++)
	{
		// traverse school calss students
		for (int student = 0; student < STUDENTS; student++)
		{
			//set student grade
			school[classRoom][student] = (rand() % 101);
		}
	}

	// traverse school classes
	for (int classRoom = 0; classRoom < CLASSES; classRoom++)
	{
		// traverse school calss students
		for (int student = 0; student < STUDENTS; student++)
		{
			// accumlate students grades
			gradesSum += school[classRoom][student];

			// if student grade more than current highest grade
			if (school[classRoom][student] > highestGrade)
			{
				highestGrade = school[classRoom][student];
			}
			// if student grade less than current lowest grade
			else if (school[classRoom][student] < lowestGrade)
			{
				lowestGrade = school[classRoom][student];
			}

			// checking student grade is pass grade
			if (school[classRoom][student] >= 50)
			{
				passed++;
			}
		}
	}


	printf("passed students = %d\n", passed);
	printf("passed students = %d\n", (CLASSES * STUDENTS) - passed);
	printf("average grade = %.2f\n", (float)gradesSum / (CLASSES * STUDENTS));
	printf("highest grade = %d\n", highestGrade);
	printf("lowest grade = %d\n", lowestGrade);


}
