#include <stdio.h>

void print_row (int n);
void print_square (int n);

int main (void)
{
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);
    print_square(n);
}


void print_row (int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_square (int n)
{
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}
