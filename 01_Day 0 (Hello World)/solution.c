#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char inputString[105];  //declaring the variable
   scanf("%[^\n]", inputString); //getting the value from the user
  
  
   printf("Hello, World.\n"); //printing the first line

   
   printf("%s", inputString); //printing the second line 

   return 0;
}
