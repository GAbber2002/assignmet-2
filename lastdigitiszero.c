#include <stdio.h>

int main()
 {

    int num;

   printf("Enter an integer");
   scanf("%d", &num);

   num = (num / 10) * 10;

   printf("The number with last digit as zero is %d\n", num);

   return 0;
}
