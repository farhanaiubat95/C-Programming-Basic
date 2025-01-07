//Palindrome Number in C Program.
#include <stdio.h>
void main(){
int n ,c ,rev = 0, rem ;
printf(" Enter a number set  =");
scanf("%d", &n);
c= n;
 while (n!=0)
 {
     rem=n%10;
     rev= rev*10 + rem ;
     n= n/10;
 }
 if(c==rev)
 {
     printf("%d is a palindrome Number .\n",c);

 }
else
{
    printf("%d is a not palindrome Number .\n",c);
}
}
