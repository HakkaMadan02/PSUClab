#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
/* evaluating series expansion */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int i, j, n, fact, sign = - 1;
  float x, p, sum = 0;
  printf("Enter the value of x in radians : ");
  scanf("%f", &x);
  printf("Enter the value of n : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i += 2)
  {
    p = 1;
    fact = 1;
    for (j = 1; j <= i; j++)
    {
        p = p * x;
        fact = fact * j;
    }
    sign = - 1 * sign;
    sum += sign * p / fact;
  }
  printf("sin %0.2f = %f", x, sum);

  return 0;

}
