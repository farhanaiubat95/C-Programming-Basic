//Write a C programs to determine the smallest of the three numbers.
#include<stdio.h>
void main ()
{
    int a,b,c;
    end:
    printf("\nEnter 3 Numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
                                {
                                                printf("%d is smallest.",a);
                                 }
                              else if (b<c)
                                {
                                               printf("%d is smallest.",b);
                                }
                            else
                               {
                                               printf("%d is smallest.",c);
                                }

goto end;
}
