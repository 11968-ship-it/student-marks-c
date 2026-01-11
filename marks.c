#include "marks.h"
/* scanf and printf */
#include <stdio.h>

/**
*
*
*
*/
{

for(i = 0; i < 5; i++)
{
printf("Enter mark for subject %d: ", i+1);
scanf("%f", &marks[i]);
printf("You entered: %.2f\n", marks[i]);
}

return (0);
}
