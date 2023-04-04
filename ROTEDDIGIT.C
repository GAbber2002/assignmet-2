#include <stdio.h>

int main()
{
   int num,x, y, z;

   printf("Enter a three-digit number ");
   scanf("%d", &num);

   x = num % 10;
   y = num / 10;


   z = (x * 100) + y;

   printf("The rotated number is: %d\n", z);

   return 0;
}
