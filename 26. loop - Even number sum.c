/*calculate the sum of Even number series from 2 to n;*/
#include <stdio.h>
void main(){
    int  even, sum,i;
    lebel:
    sum=0;
    printf("Enter odd number to : ");
    sum=0;
    scanf("%d", &even);
if(even%2!=0)
{
    printf("%d a odd number . \n\n \n",even);

}
if(even%2==0)
 {
   for(i=2; i<=even; i+=2){
        sum = sum+i;
    }
    printf("1 to %d\'s even total sum is %d. \n \n \n ",even, sum);
}
 goto lebel;
}

