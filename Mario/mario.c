#include <stdio.h>

//Prompt user for positive integer
int main(void) {
 int n;
 do
 {
   n = get_int("Positive Integer: ");
 }
 while(n < 1);
 return n;
}