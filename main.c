#include "marks.h"
#include <stdio.h>
/**
 * Main function: runs the Student Marks Management program
*/
int main(void)
{
float marks[SUBJECTS];
float average, highest, lowest;
char grade;

 input_marks(marks);
 
average = calculate_avg(marks);
highest = find_highest_mark(marks);
lowest = find_lowest_mark(marks);

grade = calculate_grade(average);

printf("\n--- Student Marks Report ---\n");
 
for (int i = 0; i < SUBJECTS; i++)
     printf("Subject %d: %.2f\n", i+1, marks[i]);
 
printf("Average: %.2f\n", average);
printf("Highest: %.2f\n", highest);
printf("Lowest: %.2f\n", lowest);
printf("Grade: %c\n", grade);
 
return(0);
}
