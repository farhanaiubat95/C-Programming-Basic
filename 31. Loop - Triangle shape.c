//Triangle shape using for loop.
/*#include<stdio.h>
void main(){
int i,j,n;
lebel:
printf("Enter a number of rows =") ;
scanf("%d",&n);
for( i=1 ; i<=n ; i++ )
{
    for( j=1 ; j<=i ; j++ )
    {
        printf(" %d   ",i);
    }
    printf("\n");
}
goto lebel;
}*/

/*/Down Triangle shape using for loop.
#include<stdio.h>
void main(){
int i,j,n;
lebel:
printf("Enter a number of rows =") ;
scanf("%d",&n);
for( i=1 ; i<=n ; i++ )
{
    for( j=i ; j<=n ; j++ )
    {
        printf(" *  ",j);
    }
    printf("\n");
}
goto lebel;
} */

//Down Triangle shape using for loop.
#include<stdio.h>
void main(){
int i,j,n;
lebel:
printf("Enter a number of rows =") ;
scanf("%d",&n);
for( i=1; i<=n ; i++ )
{
    for(j=1;j<=n; j++ )
    {
        if (j>=n-(i-1) )
        {
        printf("*");
        }
        else
        {
            printf(" ");
        }
    }
   printf("\n");
    }
goto lebel;
}
