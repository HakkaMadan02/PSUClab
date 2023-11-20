// Convert the temperature in Fahrenheit to Centigrade #include<stdio.h>
#include<stdio.h>
#include<time.h>


int main()
 {
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    float Fh,Ct;
    printf("Enter temperature in Fahrenheit\n"); scanf("%f",&Fh);
    Ct = 5.0/9*(Fh-32);
    printf("The temp in centigrades is %0.2f \n",Ct);
    return 0;
 }
