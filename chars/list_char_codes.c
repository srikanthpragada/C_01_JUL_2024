// Print char and codes

#include <stdio.h>

void main()
{
   char ch;


     for(ch = 32;  ch < 127; ch ++)
         printf("%c %d\t",ch, ch);

}
