#include <stdio.h>
int main()
{
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);

  (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 
  (printf("%c is an alphabet\n", c)) : 
  (c >= '0' && c <= '9') ? (printf("%c is a digit\n", c)) : 
  (printf("%c is a special character\n", c));

  return 0;
}
