#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string answer = get_string("お名前はなんですか？");
  printf("hello, %s\n", answer);
}