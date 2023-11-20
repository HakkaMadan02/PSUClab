#include<stdio.h>
#include<time.h>

int main()
{

/* finding generic root of a number */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int rem,num,sum;
  printf("Enter Number-");
  scanf("%d",&num);

  while(num>=10)
  {
      for(sum=0;num>0;num=num/10)
      {
         rem=num%10;
         sum=sum+rem;
      }

      if(sum>=10)
      {
         num=sum;
      }

      else
      {
         printf("The Generic root = %d",sum);
      }
  }

  return 0;

}
