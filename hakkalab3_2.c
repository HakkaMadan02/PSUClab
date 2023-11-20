//Generate prime numbers between 2 given limits.(use while loop)

#include<stdio.h>

int main()
{

    int n,k,flag,num1,num2;

printf("enter no 1 ");
scanf("%d",&first);
printf("\n enter no 2 ");
scanf("%d",&num2);
  n= num1;
    while(n<= num2)
    {
   flag=0;
   k=2;
while(k<=n/2)
{
if((n % k) == 0)
{
 flag++;
}
k++;
}
if(flag==0)
printf("\n %d ",n);
 ++n;
}
return 0;
}
