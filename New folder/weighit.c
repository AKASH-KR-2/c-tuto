#include <stdio.h>

int main() 
{
   int opt = 0;
   float w = 0;

   printf("Enter your current weight: \t");
   scanf("%f", &w);

   printf("select a option \n");
   printf("1 -> earth \n 2-> moon ...");

   scanf("%d", &opt);

   switch (opt)
   {
   case 1:
      printf("earth weight: %f", 1 * w);
      break;

   case 2:
      printf("moon weight: %f", 0.165 * w);
      break;
   
   default:
   printf("invaild option");
      break;
   }

}