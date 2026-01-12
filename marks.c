#include "marks.h"
#include <stdio.h>

/**
 * Reads marks for all subjects from the user.
 * @param marks An array to store the marks.
 */
void input_marks(float marks[])
{
    int i;
    for (i = 0; i < SUBJECTS; i++)
    {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        printf("You entered: %.2f\n", marks[i]);
    }
}

/**
 * Calculates the average of the marks.
 * @param marks Array of marks.
 * @return The average of the marks.
 */
float calculate_avg(const float marks[])
{
    int i;
    float sum = 0;
    for (i = 0; i < SUBJECTS; i++)
    {
        sum += marks[i];
    }
    return (sum / SUBJECTS);
}

/**
 * Finds the highest mark in the array.
 * @param marks Array of marks.
 * @return The highest mark.
 */
float find_highest_mark(const float marks[])
{
    int i;
    float highest = marks[0];
    for (i = 1; i < SUBJECTS; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}

/**
 * Finds the lowest mark in the array.
 * @param marks Array of marks.
 * @return The lowest mark.
 */
float find_lowest_mark(const float marks[])
{
    int i;
    float lowest = marks[0];
    for (i = 1; i < SUBJECTS; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}

/**
 * Determines the grade based on the average.
 * @param average The average marks.
 * @return The grade as a character ('A', 'B', 'C', 'D', 'F').
 */
char calculate_grade(float average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}
