//Find the largest among given 3 numbers //
#include<stdio.h>
#include<time.h>


int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

int num1, num2, num3;
printf("Enter the values of num1, num2 and num3\n");
scanf("%d %d %d", &num1, &num2, &num3);
printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
if (num1 > num2) {
if (num1 > num3) {
printf("num1 is the greatest among three. \n");

} else {
printf("num3 is the greatest among three. \n"); }
}
else if (num2 > num3)
printf("num2 is the greatest among three. \n"); else
printf("num3 is the greatest among three. \n");



return 0; }
