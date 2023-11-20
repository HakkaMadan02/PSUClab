#include<stdio.h>
#include<time.h>
int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

int a, b, c, small;
printf("Enter three numbers : \n"); scanf("%d%d%d", &a, &b, &c); if(a<b)
{
if(b<c) small = a;
else {
if(a<c) small = a;
else
small = c;
} }
else {
if(b<c) small = b;
else
small = c;
}
printf("Smallest number is: %d\n", small);


return 0;

}
