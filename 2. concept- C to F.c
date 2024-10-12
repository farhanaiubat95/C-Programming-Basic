#include<stdio.h>
void main()
{
    float  C,F;
    printf("The Tempareture of centigrated scale =");
    scanf("%f",&C);

    F=((9*C)/5)+32;

    printf("The Tempareture of farenheight scale = %.3f",F);

getch();
}
