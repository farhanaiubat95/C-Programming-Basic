//Compute electricity Bill.
#include<stdio.h>
void main(){
int unit ;
float amt ,sur_charge,total_amt,net_amt;
printf("Enter unit = ");
scanf("%d",&unit);

if(unit <= 50)
{
    amt=unit *0.50;
    sur_charge= amt*0.20;
    net_amt = amt +sur_charge;

    printf("The net amount is  %.2f ",net_amt);
}
else if (unit > 50 && unit <= 100)
{
     total_amt= 25 + ((unit - 50 )* 0.75);
    sur_charge= total_amt*0.20;
    net_amt = total_amt +sur_charge;

    printf("The net amount is  %.2f ",net_amt);
}
}
