//Write a C programs to determine whether a number is even or odd.
#include<stdio.h>
void main()
{
    int x;
end:
    printf("\nEnter a interger number = ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    goto end;


}
