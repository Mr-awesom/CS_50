#include <stdio.h>

void meow(void);
int get_positive_int(void);
void oink(int n);


int main(void)
{

    int no_of_times_to_print_oink = get_positive_int();
    oink(no_of_times_to_print_oink);

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
    /*int number;
    
    do 
    {
        printf("How many times do you want to oink? ");
        scanf("%d", &number);
    }
    while (number < 1);
    oink(number);*/

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

int get_positive_int(void)
{
    int n;
    do
    {
        printf("Give a positive integer: ");
        scanf("%d", &n);
    }
    while ( n < 1 );
    return n;
}