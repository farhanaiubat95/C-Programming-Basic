//Write a c program to Print total number of days in a month .
#include<stdio.h>
void main()
{
int m;
printf("\n press-1  for the days of  January");
printf("\n press-2  for the days of  February");
printf("\n press-3  for the days of  March");
printf("\n press-4  for the days of  April");
printf("\n press-5  for the days of  May");
printf("\n press-6  for the days of  June");
printf("\n press-7  for the days of  July");
printf("\n press-8  for the days of  august");
printf("\n press-9  for the days of  September");
printf("\n press-10  for the days of  October");
printf("\n press-11  for the days of  November");
printf("\n press-12  for the days of  December");

  end:
    printf("\n\n Now Press- ");
    scanf("%d",&m);
 switch (m)
 {
 case 1:
                                   printf(" you have pressed 1\n");
                                   printf("Total days of january = 31");
     break;
  case 2:
                                    printf(" you have pressed 2\n");
                                    printf("Total days of january = 29");
     break;
       case 3:
                                    printf(" you have pressed 3\n");
                                    printf("Total days of january = 31");
     break;
            case 4:
                                     printf(" you have pressed 4\n");
                                     printf("Total days of january = 30");
     break;
                 case 5:     printf(" you have pressed 5\n");
                                    printf("Total days of january = 31");
     break;
                      case 6:      printf(" you have pressed 6\n");
                                          printf("Total days of january = 30");
     break;
                           case 7:     printf(" you have pressed 7\n");
                                              printf("Total days of january = 31");
     break;
                                case 8:     printf(" you have pressed 8\n");
                                                   printf("Total days of january = 31");
     break;
                                     case 9:     printf(" you have pressed 9\n");
                                                        printf("Total days of january = 30");
     break;
                                          case 10:     printf(" you have pressed 10\n");
                                                                printf("Total days of january = 31");
     break;
                                               case 11:
                                                   printf(" you have pressed 11\n");
                                                   printf("Total days of january = 30");
     break;
                                                    case 12:
                                                        printf(" you have pressed 12\n");
                                                        printf("Total days of january = 31");
     break;

                                                    default:
                                                        printf("%d is Wrong Input\n",m);


}
goto end;
 }
