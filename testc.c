#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
int a,b,sum;



time_t t;
time(&t);
printf("My name is Chinmay Raje and time %s",ctime(&t));
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("The sum is %d",sum);
}
