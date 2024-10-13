//Write a C programs to determine the area of a rectangle.
#include<stdio.h>
void main ()
{
    float  L,W,Area;
    printf("The length of rectangular =");
     scanf("%f",&L);
     printf("The width of rectangular =");
     scanf("%f",&W);

    Area=(L*W);

    printf("The area of Rectangular = %.3f",Area);

getch();
}
