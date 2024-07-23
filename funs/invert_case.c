#include <stdio.h>

char invert(char ch)
{
    if(isupper(ch))
        return tolower(ch);
    else
        return toupper(ch);
}


void main()
{

    printf("%c ", invert('a'));
    printf("%c ", invert('S'));

}
