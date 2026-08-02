#include <cs50.h>
#include <stdio.h>

int get_population_int(void);

int main(void)
{
  int i = get_population_int();
  printf("Years: %i\n", i);
}

int get_population_int(void)
{
  int n;
  do
  {
    n = get_int("正の正数: ");
  } while (n <= 9);
    return n = n + (n / 3) - (n / 4);
}