/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum (int n1 , int n2)
  {
    if (no1>no2)
      minimum == no2;
    else 
      minimum == no1;
  }
  return minimum;

int maximum (int n1 , int n2)
  {
    if (no1>no2)
      maximum == no1;
    else 
      maximum == no2;
  }
  return maximum;

int multiply (int n1 , int n2)
{
  multiply = no1*no2;
}
return multiply;


  
  