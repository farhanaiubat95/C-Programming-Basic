//How to find GCD / GCF /HCF.- [Greatest Common Factor or Highest Common Factor or Greatest Common Divisor. ]
/*#include<stdio.h>
void main(){
    int n1,n2, rem;
    printf("Enter Two Numbers =");
    scanf("%d%d",&n1,&n2);

    while( n2 !=0 )
    {
        rem= n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("GCD = %d", n1);

}*/
//How to find LCM -[ Least Common Multiple]
#include<stdio.h>
void main(){
    int n1,n2, rem ,lcm , x,y;
    printf("Enter Two Numbers =");
    scanf("%d%d",&n1,&n2);
x=n1;
y=n2;
    while( n2 !=0 )
    {
        rem= n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("GCD = %d\n", n1);
   lcm = ( x*y)/n1;
   printf("LCM = %d ", lcm);
}
