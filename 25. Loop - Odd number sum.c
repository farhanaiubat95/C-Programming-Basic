/*calculate the sum of odd number series from 1 to n;*/
#include <stdio.h>
void main(){
    int  odd, sum,i;
    lebel:
        sum=0;
    printf("Enter odd number to : ");
    sum=0;
    scanf("%d", &odd);
if(odd%2==0)
{
    printf("%d a even number . \n\n \n",odd);
    goto lebel;
}
if(odd%2!=0)
 {
   for(i=1; i<=odd; i+=2){
        sum = sum+i;
    }
    printf("1 to %d\'s odd total sum is %d. \n \n \n ",odd, sum);
}
 goto lebel;
}
