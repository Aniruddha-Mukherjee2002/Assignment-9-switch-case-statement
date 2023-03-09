#include<stdio.h>
void change(int n)
{
    int temp = n%2;
    switch(temp)
    {
        case 0:printf("%d",n+1);
        break;
        case 1:printf("%d",n);
        break;
    }
}
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    change(n);
    return 0;
}
