//using C to print as following triangle using for loop.
#include<stdio.h>
void main(){
int i,j;

for(i=0;i<4;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%d  ",(j+i+1)%2);
    }
      printf("\n");
}
}
