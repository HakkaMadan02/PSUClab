#include <stdio.h>

int main()
{
    int n;
    int temp;
    int rmd;
    int rvs=0;
    //rvs=reverse,rmd=remainder
    printf("Enter a number");
    scanf("%d", &n);
     temp=n;
    while (n > 0)
    {
      rmd = n % 10;
      rvs = rvs * 10 + rmd;
        n /= 10;
    }
    printf("Number = %d\n", temp);
    printf("Reverse  = %d\n", rvs);
    if (temp == rvs)
    printf("Number is a palindrome \n");
    else
    printf("Number is not a palindrome \n");

    printf("\n My name is AnanyaSehgal.Regno_200903106");
    return 0;
}
