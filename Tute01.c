/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, sum;
  float avg;

  printf("Enter mark 01 : ");
  scanf("%d", &mark1);

  printf("Enter mark 02 : ");
  scanf("%d", &mark2);
   
   sum = mark1 + mark2;
  avg = sum /2.0;

  printf("Average of the two marks : %.2f", avg);
  
  return 0;
}

