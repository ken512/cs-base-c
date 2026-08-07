#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main (int argc, string argv[])
{
  if (argc != 2)
  {
    printf("引数がありません\n");
    return 1;
  }
  printf("hello, %s\n", argv[1]);
  return 0;
}