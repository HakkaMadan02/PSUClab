#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

float P,N,R ;
float SI,CI;
printf("enter principal amount , period , rate of interest \n"); scanf("%f%f%f",&P,&N,&R);
SI = (P*N*R)/100;
CI = P*pow((1+R/100),N)-P ;
printf("The simple interest is %.2f\n",SI); printf("The compount interest is %.2f\n",CI);


return 0;
}
