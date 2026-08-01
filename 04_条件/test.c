#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  if(x < y)
  {
    printf("xはyより小さいです\n");
  }
  else if (x > y)
  {
    printf("xはyより大きいです\n");
  }
  else
  {
    printf("xとyは等しいです");
  }
}