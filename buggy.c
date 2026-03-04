#include <stdio.h>
#include <stdint.h>

void print_column(int height);


int main()
{
  int h;
  printf("Enter height: \n");
  scanf("%d", &h);
  print_column(h);
}

void print_column(int height)
{
  for (int i = 0; i <= height; i++)
  {
    printf("#\n");
  }
}