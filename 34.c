#include<stdio.h>
#include<time.h>

int main() {
  /* count the number of primes and composites using do while */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int num,count=0,pcount=0,concount=0; // pcount is the number of prime numbers, concount is the number of composite numbers
  int i=0;
  do
  {
  count = 0;
  printf("\n Enter the number:  ");
  scanf("%d",&num);

  if(num>1)
  {
    i=1;

    while(i<=num)
    {
        if(num%i==0)
        count++;
        i++;
    }

    if (count==2)
    {
        printf("%d is a prime number\n",num);
        pcount++;
    }

    else
    {
        printf("%d is not a prime number \n",num);
        concount++;
    }
    }
  }

  while(num!=-1);

  printf("\n The number of prime numbers are %d\n ",pcount);
  printf("\n The number of composite numbers are %d\n",concount);

  return 0;
}
