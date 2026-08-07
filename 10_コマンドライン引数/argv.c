#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
  if (argc == 2)
  {
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
      printf("%c\n", argv[1][i]);
    }
    // printf("hello, %s\n", argv[0]);
  }
  // else{
  //   printf("hello, world\n");
  // }
}