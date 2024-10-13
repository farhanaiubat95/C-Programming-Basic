#include<stdio.h>
void main()
{
    float  a,b,c,s,Area;
    printf("Enter 3 sides of Triangle =");
    scanf("%f%f%f",&a,&b,&c);

    s=(a+b+c)/2;
    Area= sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area of Traiangle of %.1f,%.1f,%.1f sides are =%.4f",a,b,c,Area);

getch();
}
