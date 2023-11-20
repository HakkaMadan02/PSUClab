#include<stdio.h>
#include<time.h>

/* Amstrong numbers using while */

int main()
{
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    int tempNUM,sum=0,num,rem;
    printf("Enter a number");
    scanf("%d",&num);

    tempNUM = num;

    while (num!=0)
    {
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }

    if (tempNUM == sum)
        printf("%d is an Amstrong number", tempNUM);

    else
        printf(" %d is not an Amstrong number", tempNUM);

    return 0;
}
