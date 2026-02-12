#include <stdio.h>

int main(void)
{
    char agree_or_not[10];;
    printf("Do you agree? ");
    scanf("%s", agree_or_not);
    if (agree_or_not[0] == 'y' || agree_or_not[0] == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (agree_or_not == 'n' || agree_or_not[0] == 'N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
}