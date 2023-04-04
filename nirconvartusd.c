#include <stdio.h>

int main()
{
   float INR,USD;

   printf("Enter the amount in INR");
   scanf("%f", &INR);

   USD = INR / 76.23;

   printf("The equivalent amount in USD is%.2f\n",USD);

   return 0;
}
