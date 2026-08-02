#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//   int n;
//   do
//   {
//     n = get_int("幅: ");
//   } while (n < 1);

//   for (int i = 0; i < n; i++)
//   {
//     printf("?");
//   }
//   printf("\n");
// }

int main(void)
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}