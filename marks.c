#include "marks.h"
/* scanf and printf */
#include <stdio.h>

/**
  *
  *
  *
  *
*/

/* This part only reads marks */
void input_marks(float marks[])
{
int i;
/* loop from i = 0 to subject -1 */
for(i = 0; i < SUBJECTS; i++)
{
  printf("Enter mark for subject %d: ", i+1);
  scanf("%f", &marks[i]);
  printf("You entered: %.2f\n", marks[i]);
}
}

/* This part calculate avg marks */
float calculate_avg(const float marks[])
{
int i;
float avg;
float sum = 0;
for(i = 0; i < SUBJECTS; i++)
{
  /* add each mark to sum */
 sum += marks[i];
}
 /* average calculated */
 avg = (sum / SUBJECTS);
  return(avg);
}

/* This part findes highest mark */

