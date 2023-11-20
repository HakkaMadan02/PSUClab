// To Display size of various data types

#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    printf("The size of int is %d\n",sizeof(int));
    printf("The size of char is %d\n",sizeof(char));
    printf("The size of float is %d\n",sizeof(float));
    printf("The size of double is %d\n",sizeof(double));
    printf("The size of long double is %d\n",sizeof(long double));
    printf("The size of long int is %d\n",sizeof(long int));



    return 0;

}
