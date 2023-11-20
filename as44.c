#include<stdio.h>
#include<time.h>

int main()
{
  /* checking for a perfect number */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int x;
  int n;
  int sum=0;
  printf("Enter Number-");
  scanf("%d",&n);

  for(x=1;x<n;x++)
  {
      if(n%x==0)
      {
         sum=sum+x;
      }
  }

  if(sum==n)
  {
     printf("%d Perfect Number",n);
  }

  else
  {
     printf("%d NOT Perfect Number",n);
  }

  return 0;

}
