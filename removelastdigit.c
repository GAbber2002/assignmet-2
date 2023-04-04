#include <stdio.h>

int main()
 {
   int num, without_last;

   printf("Enter a number: ");
   scanf("%d", &num);

   without_last = num / 10;

   printf("The number without its last digit is %d.\n", without_last);

   return 0;
}
