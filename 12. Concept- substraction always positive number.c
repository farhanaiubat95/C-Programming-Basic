//Write a program to find the subtraction of two numbers, where the subtraction will always be a positive whole number.
#include<stdio.h>
void main ()
{
    int x,y,sub;
    end:
    printf("\nEnter 2 integer number =");
    scanf("%d%d",&x,&y);

    sub= sqrt((x-y)*(x-y));

    printf("The substraction value of %d & %d are = %d",x,y,sub);

    goto end;
}
