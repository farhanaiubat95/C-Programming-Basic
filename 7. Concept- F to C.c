//	Write a C programs to express the temperature of the Fahrenheit scale adopted by the keyboard in centigrade scale.
#include<stdio.h>
void main()
{
    float F,C;
    printf("The Temparature of the Fahrenheit scale =");
    scanf("%f",&F);

    C=(5*(F-32))/9;

    printf("The Temparature of centigrated scale= %.3f",C);
getch();
}
