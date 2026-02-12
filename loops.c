#include <stdio.h>

void meow(void);

int main(void)
{
    int i = 0;
    while ( i < 3 )
    {
        printf("Moooooo\n");
        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Woof with for loop\n");
    }

    for (int i = 0; i < 3; i++)
    {       
    meow();
    }

}

void meow (void)
{
    printf("Meow\n");
}
