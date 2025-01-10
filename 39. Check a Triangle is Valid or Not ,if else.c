//Check a Triangle is Valid or Not || if/else
#include<stdio.h>
void main (){
int x,y,z,sum;
lebel:
printf("Enter first number  = ");
scanf("%d",&x);
printf("Enter second number  = ");
scanf("%d",&y);
printf("Enter first number  = ");
scanf("%d",&z);

sum=(x+y+z);

if(sum==180 &&  x> 0 && y>0 && z>0)
{
    printf("------Valid / This is Triangle Shape------\n\n");
}
else
{
    printf("------InValid / This is not Triangle Shape------\n\n");
}
goto lebel;
getch();
}
