#include<stdio.h >
void main(){

int w;
lebel:
printf("Give  Weight = ");
scanf("%d",&w);

if(1<=w && w<=100){
   if (w/2)
    {
        if(w%2==0){
            printf(" yes\n");
    }
    else{
        printf("No\n");
    }
    }
}
else{
            printf("Nothing\n");
    }
goto lebel;


}
