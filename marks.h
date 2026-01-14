#ifndef MARKS_H
#define MARKS_H

#define SUBJECTS 5

/* A function that fills (input) the marks array */
void input_marks(float marks[]);
/* A function that calculates the average */
float calculate_avg(const float marks[]);
/* A function that finds the highest mark */
float find_highest_mark(const float marks[]);
/* A function that finds the lowest mark */
float find_lowest_mark(const float marks[]);
/* A function that determines the grade */
char calculate_grade(float average);

#endif
