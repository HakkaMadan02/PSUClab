#include <stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    float x,y;
    float A,B,C,D ;
    printf("Enter the two numbers\n");
    scanf("%f%f",&x,&y);

    A = x+y;
    B = x-y;
    C = x*y;
    D = x/y;

    printf("the Sum is %f\n",A);
    printf("the Difference is %f\n",B);
    printf("the Product is %f\n",C);
    printf("the Quotient is %f\n",D);


    return 0;

}
