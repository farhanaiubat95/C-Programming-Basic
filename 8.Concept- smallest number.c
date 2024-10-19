//	Write a C programs to determine the smallest number between two numbers.
#include<stdio.h>
void main()
{
    int x,y;
    end:
    printf("\nEnter two integer number =");
    scanf("%d%d",&x,&y);
   (x<y)?(printf("%d is smallest",x)):(printf("%d is smallest",y));

   goto end;

   getch();
}
