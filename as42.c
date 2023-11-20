#include<stdio.h>
#include<time.h>

int main()
{
  /* FLOYD'S TRIANGLE */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int n, i, c, a = 1;
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
        printf("%d ", a); // Please note space after %d
        a++;
    }
    printf("\n");
  }
  return 0;

}

