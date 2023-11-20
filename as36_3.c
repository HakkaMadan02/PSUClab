#include<stdio.h>
void main ()
{
   int n=2,i,choice;
   do
   {
       i=1;
       while(i<=10)
       {
           printf("%d X %d = %d\n",n,i,n*i);
           i++;
       }
       printf("To continue %d , Press any natural number",n+1);
       scanf("%d",&choice);
    if(choice == 0)
       {
           break;
       }
       n++;
   }while(1);
printf("\n My name is AnanyaSehgal.Regno_200903106");
return;

}
