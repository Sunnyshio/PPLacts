// a program that prompts the user to enter an integer and floating point. 
// The program will calculate the average of the positive numbers then display the average

#include <stdio.h>

int main(void) {

  int i = 0; //initializes i for integer
  float f = 0; //initializes f for floating point

  printf("Enter an Integer:\n"); //instructs the user to enter an integer
  scanf("%i", &i); //scans the input and assigns it to i
  printf("Enter a Floating Point:\n"); //instructs the user to enter a floating point 
  scanf("%f", &f); //scans the input and assigns it to f

  if (i >= 0 && f >= 0) { //checks if the floating point and integer are both positive numbers
    printf("The Average is: %f", (i + f)/2); //prints the average
  }
}