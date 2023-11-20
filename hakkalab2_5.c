#include<stdio.h>
#include<time.h>
int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

int x, y;
printf("Enter the value of X.\n"); scanf("%d",&x);
if(x)
{
if(x < 0) y = 1;
else if(x > 0) y = -1;
else if(x == 0) y = 0;

}


printf("Hence Y = %d\n",y);


return 0;
}
