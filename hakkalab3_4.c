#include<stdio.h>
#include<time.h>

int main() {
  /* count the number of primes and composites using do while */
  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int num, count=0, pcount=0, concount=0;
  int i;
  printf("enter a number\n" );
  scanf("%d\n", &num);
  /* pcount is the number of primary numbers and concount is the number of composite numbers */

  do {
    count = 0;
    if (num>1)
    {
      i =1 ;
      while (i < num)
      {
        if (num%i == 0)
        count ++;
        i ++;

      }

      if (count ==2)
      {
        printf("%d is a prime number\n", num);
        pcount ++;
      }
      else
      {
        printf("%d is not a prime number\n", num);
        concount++;
      }
    }

  } while(num!= -1);
  printf("The number of prime numbers is %d\n", pcount);
  printf("The number of composite numbers is\n", concount);

  return 0;
}
