#include<stdio.h>
#include<time.h>

int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

int a;
printf("Enter the Integer.\n");
scanf("%d", &a);
if(a%2 ==0)
printf("The number %d is even.\n", a);
else
printf("The number %d is odd.\n", a);

return 0;
}
