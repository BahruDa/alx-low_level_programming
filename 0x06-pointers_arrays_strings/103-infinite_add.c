#include<stdio.h>

// function for taking input from user
float input()
{
   float number; // declare variable

   // take input
   printf("Enter number: ");
   scanf("%f", &number);

   // return input value
   return number;
}

// function to find sum of two numbers
float addition(float num1, float num2)
{
   return num1 + num2;
}

// function for displaying the result
void display(float n1, float n2, float sum)
{
   printf("%.2f + %.2f = %.2f\n", n1, n2, sum);
}

int main()
{
   // declare variables
   float number1, number2, result;

   // take input from end-user
   number1 = input();
   number2 = input();

   // calculate addition of numbers
   result = addition(number1, number2);

   // display results
   display(number1, number2, result);

   return 0;
}
