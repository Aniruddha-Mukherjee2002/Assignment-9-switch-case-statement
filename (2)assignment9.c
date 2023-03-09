/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<stdio.h>
#include<stdlib.h>
int add(int x,int y)
{
    return(x+y);
}
int mul(int x,int y)
{
    return(x*y);
}
int Div(int x,int y)
{
    if(y==0)
        printf("Cannot divided by zero");
    return(x/y);;
}
int dif(int x,int y)
{
    return(x-y);
}
void operation()
{
    int n;
    int x,y;

    while(1) {
    printf("1.Addition\n2.Subtraction\n3.Multiplicaion\n4.Division\n5.Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            printf("\nEnter two numbers : ");
              scanf("%d%d",&x,&y);
              printf("\nAddition of %d and %d is %d\n",x,y,add(x,y));
              break;
        }

    case 2:
        {
            printf("\nEnter two numbers : ");
             scanf("%d%d",&x,&y);
             printf("\nSubtraction of %d and %d is %d\n",x,y,dif(x,y));
             break;

        }
    case 3:
        {
            printf("\nEnter two numbers : ");
             scanf("%d%d",&x,&y);
             printf("\nMultiplication of %d and %d is %d\n",x,y,mul(x,y));
             break;
        }

    case 4:
        {
            printf("\nEnter two numbers : ");
             scanf("%d%d",&x,&y);
             printf("\nDivision of %d and %d is %d\n",x,y,Div(x,y));
             break;
        }

    case 5:exit(0);

    }
    }
}

int main()
{
    operation();
    return 0;
}
