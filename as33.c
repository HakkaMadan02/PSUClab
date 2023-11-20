#include<stdio.h>
int main()
{
int limit;
int sum=0;
int n;
int rem;
printf("Enter number-");
scanf("%d",&limit);
n=limit;
 while (n!=0)
 {
 rem=n%10;
 sum +=rem*rem*rem;

 n/=10;
 }
 if(sum==limit)
 printf("%d is an Armstrong Number",limit);
 else
 printf("%d is not an Armstrong Number",limit);
 printf("\n My name is AnanyaSehgal.Regno_200903106");

 return 0;

}
