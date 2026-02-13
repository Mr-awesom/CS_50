#include <stdio.h>

void meow(void);
void oink(int n);
int main(void)
{
    /*int i = 0;
    while ( i < 3 )
    {
        printf("Moooooo\n");
        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Woof with for loop\n");
    }*/

    /*for (int i = 0; i < 3; i++)
    {       
    meow();
    }*/
    int number;
    
    do 
    {
        printf("How many times do you want to oink? ");
        scanf("%d", &number);
    }
    while (number < 1);
    oink(number);

}

void meow (void)
{
    printf("Meow\n");
}

void oink(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Oink\n");
    }
}
