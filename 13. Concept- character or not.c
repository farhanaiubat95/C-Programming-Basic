//Write a C Program to find that it is character or not.
#include<stdio.h>
void main()
{
    char x, result;

    printf("\nEnter  Something =");
    scanf("%c",&x);

    if ((x>='a'&& x<= 'z') || (x>='A' && x<= 'Z'))
   {
       printf("%c  is  a Character ", x);
    }
    else
    {
        printf("%c is  not a character",x);
    }
getchar();
}
