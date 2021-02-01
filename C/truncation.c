#include <stdio.h>

//using floats real number
int main(void) 
{
  //Get numbers from user
  int x = get_int("x: ");
  int y = get_int("y: ");
  // Divide x by y
  float z = (float) x / (float) y;
  printf("%f\n", z);

}