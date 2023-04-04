#include <stdio.h>

int main()
 {
   int num, unit;

   printf("Enter a number: ");
   scanf("%d", &num);

   unit = num % 10;

   printf("The unit digit of %d is %d.\n", num, unit);

   return 0;
}
