#include<stdio.h>
#include<time.h>
int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

int a=90, b=80;

printf("Before swapping a=%d b=%d\n",a,b);

a=a+b;//a=170 (80+90)
b=a-b;//b=10 (90-80)
a=a-b;//a=80 (90-10)

printf("After swapping a=%d b=%d\n",a,b);


return 0;
}
