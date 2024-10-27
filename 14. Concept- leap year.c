//Write a C programs to determine if a year is a leap year.
#include<stdio.h>
void main (){
int  year;
end:
printf("\nEnter a year =");
scanf("%d",&year);

 if ( year%4==0 && year%100!=0)
  {
     printf(" %d is a leap year.",year);
  }
     else if (year%400==0)
       {
            printf("%d is a leap year.",year);
       }
   else {
            printf(" %d is not a leap year",year);
              }
              goto end;
}
