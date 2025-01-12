//using C to create the prime number series.
#include<stdio.h>
void main(){
int i,j,n,c;
printf("Enter the number =\n");
scanf("%d",&n);

for(i=2;i<=n;i++)
{
    c=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("%d\t",i);
    }
}
}
