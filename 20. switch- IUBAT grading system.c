#include<stdio.h>
void main()
{
    int m;
    end:
    printf("Enter Mark = ");
    scanf("%d",&m);
  switch(m>=0 && m<=100)
{ case 1:
        switch(m/10)
        {
        case 10:
        case 9:
            printf("\nA Grade %d\n",m);
            break;
        case 8:
            switch ( m%10)
            {
            case 9:
            case 8:
            case 7:
                printf("\nB+ Grade for %d\n",m);
                break;

            case 6:
            case 5:
            case 4:
                printf("\nB Grade  for %d\n",m);
                break;

            case 3:
            case 2:
            case 1:
            case 0:
                printf("\nB- Grade for  %d\n",m);
                break;
                }
                break;
               case 7:
            switch ( m%10)
            {
            case 9:
            case  8:
            case 7:
                printf("\nC+  Grade  for %d\n",m);
                break;
            case 6:
            case 5:
            case 4:
                printf("\nC  Grade  for %d\n",m);
                break;
            case 3:
            case 2:
            case 1:
            case 0:
                printf("\nC-  Grade  for %d\n",m);
                break;
                }

                break;
            case 6:
            switch ( m%10)
            {
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
                printf("\nD+ Grade for   %d\n",m);
                break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("\nD  Grade for %d\n ",m);
                break;
                }

                break;
               default:
                printf("\nF Grade for  %d\n",m);
        }
        break;
       default:
                printf(" \nInvalid\n");
}
goto end;
}







