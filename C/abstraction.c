#include <stdio.h>

//Prorotype that lets the compiler know there will be a function call meow
void meow(void);

int main(void)
{
  // I'm caling the function 3 times
  for(int i = 0; i < 3; i++) 
  {
    meow();
  }
}

//Abstraction
 void meow(void)
 {
   printf("meow\n");
 }