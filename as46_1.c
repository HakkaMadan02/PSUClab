#include<stdio.h>
#include<time.h>

int main()
{

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter number%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         break;
      }

      sum += number;
   }

   printf("Sum = %.2lf", sum);

   return 0;

}
