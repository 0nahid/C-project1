#include <stdio.h>
{
  char m;
  scanf("%c",&m);
  ((m>="A" && m <="Z")||((m>="a" && m <="b")))?(printf("Alphabet"))
  :((m>="0" && m<="9")?(printf("Numeric")):(printf("Special")));
}
