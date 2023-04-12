// a program that uses nested loop to create a decreasing number pattern in inverted right triangle

#include<stdio.h>

int main(void) {

 int i; //initialize i for rows
 int j; //initialize j for columns
 
 for (i = 9; i >= 1; i--) { //first loop for displaying the rows
   for (j = 1; j <= i; j++) { //second loop for displaying the columns
     printf("%d\t", j); //print columns
   }
   printf("\n"); //prints new line
 }
}