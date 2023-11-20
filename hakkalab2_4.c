#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

float a, b, c;
float root1, root2, imaginary;
float discriminant;

printf("Enter values of a, b, c in quadratic equation (aX^2 + bX + c): "); scanf("%f%f%f", &a, &b, &c);
discriminant = (b * b) - (4 * a * c);

switch(discriminant > 0)
{
case 1:
/* If discriminant is positive */

root1 = (-b + sqrt(discriminant)) / (2 * a); root2 = (-b - sqrt(discriminant)) / (2 * a);
printf("Two distinct and real roots exists: %.2f and %.2f\n",root1, root2); break;

case 0:
/* If discriminant is not positive */
switch(discriminant < 0)
{

case 1:
/* If discriminant is negative */
root1 = root2 = -b / (2 * a);
imaginary = sqrt(-discriminant) / (2 * a);
printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f\n",root1, imaginary, root2, imaginary);
break;

case 0:
/* If discriminant is zero */ root1 = root2 = -b / (2 * a);

printf("Two equal and real roots exists: %.2f and %.2f\n", root1, root2);
break;
}
}


return 0;
}
