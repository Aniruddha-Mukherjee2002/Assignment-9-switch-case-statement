#include<stdio.h>
void greet()
{
    int temp;
    while(1)
    {
        printf("\nEnter a week number : ");
        scanf("%d",&temp);

        switch(temp)
        {
            case 1:printf("Pure Hard,Work No Shortcuts");
            break;

            case 2:printf("You are the best programmer");
            break;

            case 3:printf("Never give up");
            break;

            case 4:printf("Eat-code-sleep-repeat");
            break;

            case 5:printf("Write code");
            break;

            case 6:printf("No rest and fun only test and run");
            break;

            case 7:printf("Be a good listener");
            break;

            default:return;
        }
    }
}
int main()
{
    greet();
    return 0;
}
