/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n , sum = 0,i;
  printf ("Enter a number : ");
  scanf("%d" , &n);
  for(i=0;i<n;i++)
    {
      sum+=(i+1);
    }
  printf("Sum = %d" ,sum);
  return 0;
}

