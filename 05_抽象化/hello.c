#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string name = get_string("あなたの名前名なんですか？\n");
  printf("hello, %s\n",name);
}