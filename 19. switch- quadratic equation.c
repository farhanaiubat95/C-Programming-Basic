#include<stdio.h>
#include<math.h>
void main(){
float a,b,c, d,value1,value2,value3;
end:
printf("Enter 3 Numbers =");
scanf("%f%f%f",&a,&b,&c);
d=( b*b-4*a*c );
value1=(-c/b);
 value2=( -b+sqrt(d))/(2*a);
   value3=( -b-sqrt(d))/(2*a);
if(a==0 &&b==0)
{
    printf("\nNo solution\n");
}
else if(a==0){
    printf("\nAnswer is %f\n",value1);
}
else if(d<0){
    printf("\nThis is a imaginary number.\n\n");
}
else
{
    printf("\nThere are two roots.\n One is %.3f  and    another is %.3f\n\n",value2,value3);

}
  goto end;
}




