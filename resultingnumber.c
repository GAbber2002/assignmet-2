#include <stdio.h>

int main()
{
   int num, digit;

   printf("Enter an integer");
   scanf("%d", &num);

   printf("Enter a digit to append");
   scanf("%d", &digit);

   num = num * 10 + digit;

   printf("The resulting number is%d\n", num);

   return 0;
}
