#include<stdio.h>
#include<time.h>

int main()
{
   /* primes between 2 limits*/

    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    int n,k,flag,num1,num2;
    printf("enter no 1 ");
    scanf("%d",&num1);
    printf("\n enter no 2 ");
    scanf("%d",&num2);
    n= num1;
    while(n<= num2)
    {
        flag=0;
        k=2;
        while(k<=n/2)
        {
            if((n % k) == 0)
            {
            flag++;
            }
            k++;
        }
        if(flag==0)
        printf("\n %d ",n);
        ++n;
    }

    return 0;
}

