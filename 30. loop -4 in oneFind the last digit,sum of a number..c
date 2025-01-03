//Find the first  digit of a number in C Programming.
/*#include<stdio.h>
void main(){
    int n  ;
    lebel:
printf("Enter a number = ");
scanf("%d",&n);

while(n>=10)
{
    n = n/10;

}

printf(" The first digit of  %d  is  =  %d \n  \n ",n,n);

goto lebel;
}*/
//Find the  last digit of a number in C Programming.
/*#include<stdio.h>
void main(){
    int n ,  last_digit ;
    lebel:
printf("Enter a number = ");
scanf("%d",&n);

last_digit = n%10;
printf(" The Last digit of  %d  is  =  %d \n  \n ",n,n);

goto lebel;
}*/
/*/Find the first  & last digit of a number in C Programming.
#include<stdio.h>
void main(){
    int n , Number , last_digit ;
    lebel:
printf("Enter a number = ");
scanf("%d",&n);

Number = n;
last_digit = n%10;

while(n>=10)
{
    n= n/10;

}

printf(" The first  &  last  digit of  %d  is  =  %d  &  %d  \n  \n ",Number ,n, last_digit);

goto lebel;
}*/

//Find the sum of  first  & last digit of a number in C Programming.
#include<stdio.h>
void main(){
    int n , Number , last_digit , sum;
    lebel:
printf("Enter a number = ");
scanf("%d",&n);

Number = n;
last_digit = n%10;

while(n>=10)
{
    n= n/10;
}
sum = last_digit + n;
printf(".... The first  &  last  digit of  %d  is  = ( %d  &  %d  )     so \n..the sum of this first & last number is  =  [ %d ]\n \n  ",Number ,n, last_digit,sum);

goto lebel;
}

