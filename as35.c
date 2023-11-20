#include<stdio.h>
#include<time.h>

int fact(int rem)
{
  /* creating a function to find factorial values */

    int mtp =1;
    for (int i=1 ; i<=rem ; i++)
    {
        mtp = mtp*i;
    }
    return mtp ;
}

int main()
{
  /* to find strong numbers*/

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int n, sum=0, rem;
  printf("enter a number: \n");
  scanf("%d", &n);
  int num=n;

  while(num!=0)
  {
      rem = num%10;
      int f =fact(rem);
      num=num/10;
      sum= sum+f;
  }

  if (sum == n)
  {
      printf("\n %d is a strong number", n);
  }

  else
  {
      printf("\n %d is not a strong number", n);
  }
  return 0;
}


