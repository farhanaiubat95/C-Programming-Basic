//Calculate Sum of Natural Numbers
#include<stdio.h>
void main(){

int n,sum=0;
printf("Enter  upper limit = ");
scanf("%d",&n);
for(int i =1; i<=n; i++)
{
    sum = sum + i;
}
printf("\n The sum of the natural numbers up to %d is %d",n,sum);


getch();
}
