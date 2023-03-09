#include<stdio.h>
int convert(int n)
{
   int temp = n>0?0:1;
   switch(temp)
   {
       case 0:return(n*(-1));
       break;
       case 1:return(n*(-1));
       break;
   }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",convert(n));
    return 0;
}
