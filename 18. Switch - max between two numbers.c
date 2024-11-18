//Write a C Program to Find maximum between two numbers using switch.
#include<stdio.h>
void main(){
int n1,n2;
printf("Enter two numbers =");
scanf("%d%d",&n1,&n2);
switch(n1>n2){
case 1:
    printf("%d  is big",n1);
    break;
    case 0:
    if(n2>n1)
    {
        printf("%d is big",n2);
    }
    if(n1==n2)
    {
        printf("%d and %d  is equal",n1,n2);
    }
    break;
    default:
        printf("Invalid ");
        break;
}
getch();
}
