//Multiplication   Number
  #include<stdio.h>
  void main(){
  int i,mul,n;
  printf("Enter a number = ");
  scanf("%d",&n);
    printf("Multiplication   Number  of  %d  is -   \n",n);
  for(i=1;i<=10;i++)
  {
      mul=n*i;
   printf("%d  x %d = %d \n",n,i,mul);

  }

  }

