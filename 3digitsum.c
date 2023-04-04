#include <stdio.h>

int main()
 {
   int num, sum, digit;

   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   digit = num % 10;
   sum = digit;
   num = num / 10;

   digit = num % 10;
   sum = sum + digit;
   num = num / 10;

   digit = num % 10;
   sum = sum + digit;

   printf("The sum of the digits is %d\n", sum);

   return 0;
}
