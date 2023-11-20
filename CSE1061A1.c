#include<stdio.h>
#include<math.h>


int main()
{
    float p,r,t,si,ci,a,temp;
    int ch;
    p = 40000;
    r = 5;
    t = 3;
    printf("\n 1 for SI");
    printf("\n 2 for CI");
    printf("\n Select any option:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            si=(p*r*t)/100;
            printf("The simple interest is %f",si);
            break;
        case 2:
            temp=(1+r/100);
            a=p*pow(temp,t);
            ci=a-p;
            printf("The compound interest is %f",ci);
            break;
        default:

    printf("\n My name is HAKKA MADAN,Regno_200929092");

    }
    printf("\n My name is HAKKA MADAN,Regno_200929092");

    return 0;
}
