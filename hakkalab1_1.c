#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);
    int x,y ;
    int sum;
    printf("Enter the numbers\n");
    scanf("%d%d",&x,&y);


    sum = x+y;

    printf("the sum is %d\n",sum);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));
    return 0;

}
