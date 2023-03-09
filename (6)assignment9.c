/*Program to check whether a year is a leap year or not. Using switch
statement*/

#include<stdio.h>
void leap(int n)
{
     int leap = (n%400==0&&n%100!=0)||(n%4==0);

     switch(leap)
     {
         case 0:printf("%d is not a leap year.",n);
         break;
         case 1:printf("%d is a leap year.",n);
         break;
         default:printf("Wrong Input");
         return;
     }
}
int main()
{
    printf("Enter a year to check it is leap year or not : ");
    int year;
    scanf("%d",&year);
    leap(year);
    return 0;
}
