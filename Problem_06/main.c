/* This program asks the user for the marks of several students (3 marks per * student)
 and then calculates the mean */


#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char **argv)
{
  tStudent classroom[NUM_STUDENTS];
  float *average;
  int numStudents;

  printf("Number of students (max 10) = "); 
  scanf("%d",&numStudents); getchar();  
  printf("Number of students in the group = %d\n", numStudents); 

  getNames (classroom, numStudents);
  getMarks (classroom, numStudents);
  average=calculateAverage (classroom, numStudents);
  getAverage(average, numStudents);
}
