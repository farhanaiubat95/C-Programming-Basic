//Find Factorial: 10! 15!
#include<stdio.h>
void main(){
 long double n ,fact ,i;
lebel:
fact=1;
printf("Enter a number for factorial = ");
scanf("%ld",&n);
if(n<0)
{
    printf("Invalid \n Enter a new number = ");
    goto lebel;
}
else{
for( i=1; i<=n ; i++)
{
fact= fact*i;
}
printf("The factorial number of  %ld  is %ld\n",n,fact);
}
goto  lebel;
}
