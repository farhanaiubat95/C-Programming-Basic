//Count number of digits in a number.
#include<stdio.h>
void main (){
long long n ;
int count = 0;
printf(" Input a number =");
scanf("%lld",&n);

do {

    ++count;
    n=n/10;
}while(n!=0);
printf("Count total  digit in a number  = %d",count);


}
