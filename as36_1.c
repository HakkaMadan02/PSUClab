#include<stdio.h>
#include<time.h>

int main()
{

  /* to demonstrate use of break in while loop */

  time_t t;
  time(&t);
  printf("\n My name is HAKKA MADAN,Regno_200929092");
  printf("\n Date and Time: %s", ctime(&t));

  int i, j, a;
  printf("Enter a positive number: \n");
  scanf("%d",&i);

  while(i>a)
  {
    printf("number of terms: \n");
    scanf("%d", &a);

    if(a<0)
        break;

    for( j=1; j<=a; j++)
            printf("%d\t", i*j);


  }

  return 0;
}
