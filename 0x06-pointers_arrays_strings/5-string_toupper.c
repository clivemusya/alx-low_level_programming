#include "main.h"

/**
 *string_toupper - chg
 *@s:var
 *Return:s
 */

char *string_toupper(char *s)
{
int i = 0;
while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 'a' - 'A';
i++;
}
return (s);
}
