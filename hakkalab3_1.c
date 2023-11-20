//lab3_1

#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    int num,dig,rev=0,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    n = num;
    while (num>0)
    {
        dig = num%10;
        rev = rev*10 + dig;
        num = num/10;
    }
    if (n==rev)
        printf("/t Is a palindrome");

    else
        printf("/t Not a Palindrome");

    return 0;
}
