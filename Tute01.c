/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float num1,num2,avg=0;
  printf("enter num 1: ");
  scanf("%f",&num1);
  printf("enter num 2: ");
  scanf("%f",&num2);
  avg = (num1 + num2)/2;
  printf("avg = %.2f",avg);
  return 0;
}

