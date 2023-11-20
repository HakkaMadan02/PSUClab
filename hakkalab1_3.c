#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    char c ;
    printf("enter the character: ");
    scanf("%c",&c);


    printf("ASCII value of %c=%d",c,c);
    return 0;

}
