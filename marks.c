#include "marks.h"
/* scanf and printf */
#include <stdio.h>

/**
  *
  *
  *
  *
*/

void input_marks(float marks[])
{
int i;
float sum = 0;

/* loop from i = 0 to subject -1 */
for(i = 0; i < SUBJECTS; i++)
{
  printf("Enter mark for subject %d: ", i+1);
  scanf("%f", &marks[i]);
  printf("You entered: %.2f\n", marks[i]);
}

float calculate_avg(const float marks[]);
for(i = 0; i < SUBJECTS; i++)
{
  /* add each mark to sum */
  sum += marks[i];
}
}
