#include <stdio.h>
#include <stdlib.h>


int main (){
    printf ("welcome,Ayanokoji\n here are your infos \t password: HIF \n");
    short i = 1.5;
    int x = 2;
    long y = 4;
    float z = 4.9;
    double a = 67676.28782;
    long double b = 884728927498.290219721;
    int number1;
    int number2;
    printf("go with a number1:\t");
    scanf("%d",&number1);

    printf("go with a number2:\t");
    scanf("%d",&number2);
    
    int f = number1*number2;

    printf ("%d * %d = %d",number1,number2,f);

    return 0 ;
}