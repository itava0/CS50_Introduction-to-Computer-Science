#include <stdio.h>

int main(void) 
{
  //Prompt user for x & y
  int x = get_int("x: ");
  int y = get_int("y: ");

 // Compare x & y
  if(x < y) 
  {
    printf("x is less than y\n");
  } else if(x > y) 
  {
    printf("x is greater than y\n");
  } else
  {
    printf("x is equal to y\n");
  }
}