#include<stdio.h>
void greet()
{
    int temp;
    while(1)
    {
        printf("\nEnter a number between 1 to 3 : ");
        scanf("%d",&temp);

        switch(temp)
        {
            case 1:printf("Good");
            break;

            case 2:printf("Better");
            break;

            case 3:printf("Best");
            break;

            default:printf("Invalid");
            return;
        }
    }
}
int main()
{
    greet();
    return 0;
}

