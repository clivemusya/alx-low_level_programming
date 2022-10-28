#include "main.h"

/**
 *_strcat - chg
 *@dest:var1
 *@src:var2
 *Return:temp
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
