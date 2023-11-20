#include<stdio.h>
#include<time.h>

 int main()
 {
    time_t t;
    time(&t);
    printf("\n My name is HAKKA MADAN,Regno_200929092");
    printf("\n Date and Time: %s", ctime(&t));

    int a=30,b=10,c=5,d=15;
    int L,M,N,O;

    L= (a + b) * c / d ;
    M= ((a + b) * c) / d ;
    N= a + (b * c) / d ;
    O= (a + b) * (c / d) ;

    printf("%d\n",L);
    printf("%d\n",M);
    printf("%d\n",N);
    printf("%d\n",O);



    return 0;

 }
