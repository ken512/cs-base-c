#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  string s = get_string("入力: ");
  
  printf("出力: ");

  for (int i = 0, n = strlen(s); i < n; i++) // s[i]が0でない限りループ
  {
    printf("%c", s[i]);

  } 
  printf("\n");
}