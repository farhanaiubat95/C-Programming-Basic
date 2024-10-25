//Write a C programs to determine if a number is positive.
#include<stdio.h>
void main(){

int  x;
end:
printf("\n\nEnter a Number =");
scanf("%d",&x);

if (x>=0)
{
    printf("%d  is  Positive Number.", x);
}
else
{
    printf("%d is Negetive  Number.", x);
}
goto end;

}
