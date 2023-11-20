#include<stdio.h>
#include<time.h>

int main()
{

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int n,a,b,c,product;
  printf("Enter Number of Rows");
  scanf("%d",&n);
  printf("Enter Number of Columns");
  scanf("%d",&a);

  for(b=1;b<=n;b++)
  {
    for(c=1;c<=a;c++)
    {
      product=b*c; printf("%d\t",product);
    }
    printf("\n");
  }
  return 0;

}
