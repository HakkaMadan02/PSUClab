//Input radius to find the volume and surface area of a sphere #include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
time_t t;
time(&t);
printf("\n My name is HAKKA MADAN,Regno_200929092");
printf("\n Date and Time: %s", ctime(&t));

float R;
float V,A;
printf("Enter Radius\n");
scanf("%f",&R);
V = (4.0/3)*3.14*pow(R,3); A = 4.0*3.14*pow(R,2);
printf("the volume of the sphere is %f\n",V);
printf("the surface area of the sphere is %f\n",A);




return 0;
}
