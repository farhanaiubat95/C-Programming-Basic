//Write a C programs to convert user-given lowercase letters to uppercase letters.
#include<stdio.h>
void main()
{
 char lower,upper;

printf("The uppercase letter=");
  scanf("%c",&upper);
  lower=tolower(upper);

    printf("The lowercase letter of %c is= %c\n",lower,upper);

getch();
}
