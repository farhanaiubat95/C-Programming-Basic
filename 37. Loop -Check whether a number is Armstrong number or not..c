//	Check whether a number is Armstrong number or not.
#include<stdio.h>
void main()
{
long long n , m,o;
int c=0,sum=0,mul,rem;
printf("Enter a number =");
scanf("%lld",&n);
m=n;
o=n;
while( n!=0)                                                                     /*do
                                                                                              {
                                                                                               c++;
                                                                                               n=n/10;
                                                                                                } while( n!=0);
                                                                                                printf("There are %d  digit.",c);
                                                                                                 }*/
{
    c++;
    n=n/10;
}
printf("There are %d  digit.\n",c);

do
{
    rem= m%10;
    mul = rem*rem*rem ;
    sum =mul+sum;
    m=m/10;
} while(m!=0);
printf("The total number after multiplied by itself = %d \n ", sum);

if(o==sum)
{
    printf("This is Amstrong Number.\n");
}
else
{
    printf("This is not Amstrong Number.\n");
}
}
