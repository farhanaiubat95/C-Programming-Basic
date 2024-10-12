#include<stdio.h>

void main(){

int x,y,sum,sub,mul;
float avg;
printf ("Enter Two Numbers =");
scanf ("%d %d",&x,&y);

sum=x+y;
sub=x-y;
avg=sum/2;
mul=x*y;

printf("\nsum=%d\n sub=%d\n mul=%d",sum,sub,mul);
printf("\navg=%.4f ",avg);
getch();
}














