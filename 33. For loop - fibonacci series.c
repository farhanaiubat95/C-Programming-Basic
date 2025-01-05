//Fibonacci series= (0,1,1,2,3,5,8,13,...... ) first two digit always 0 & 1.
/*#include<stdio.h>
void main (){
int  d1=0,d2=1,fibo,i,n;

printf("\nEnter the number of terms =  ");
scanf("%d",&n);
 fibo =d1+d2;
printf("Th fibonacci series of  %d terms is  = %d ,%d , ",n,d1,d2);

for(i=3 ; i<=n ; i++)
{
    printf(" %d ", fibo);
    d1=d2;
    d2=fibo;
     fibo =d1+d2;
}
}*/
//Fibonacci series= (0,1,1,2,3,5,8,13,...... ) first two digit always 0 & 1.
//untill n .
#include<stdio.h>
void main (){
int  d1=0,d2=1,fibo,n;

printf("\nEnter  a positive number  =  ");
scanf("%d",&n);
 fibo =d1+d2;
printf("Th fibonacci series of  %d terms is  = %d ,%d , ",n,d1,d2);

while (fibo<=n)
{
    printf(" %d ", fibo);
    d1=d2;
    d2=fibo;
     fibo =d1+d2;
}
}
