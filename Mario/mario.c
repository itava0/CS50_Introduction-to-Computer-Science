#include <stdio.h>
//The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive

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