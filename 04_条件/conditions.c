#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char c = get_char("同意しますか?: ");
  if(c == 'y' || c == 'Y')
  {
    printf("同意します.\n");
  }
  else if(c == 'n' || c == 'N')
  {
    printf("同意しません.\n");
  }
}