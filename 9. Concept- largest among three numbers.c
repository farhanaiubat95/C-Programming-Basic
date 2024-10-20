//Write a C programs to determine the largest of the three numbers.
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three integer numbers=");
    scanf("%d%d%d",&x,&y,&z);

    (x>y && x>z)?    printf("%d is largest",x):    (      (y>z)?      printf("%d is largest",y)   :   printf("%d is largest",z));
    getch();
}
