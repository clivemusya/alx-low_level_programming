#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - rng
 *Return: 0
 */

int main(void)
{
char password[84];
int i = 0, sum = 0, a, b;
srand(time(0));
while (sum < 2772)
{
password[i] = 33 + rand() % 94;
sum += password[i++];
}
password[i] = '\0';
if (sum != 2772)
{
a = (sum - 2772) / 2;
b = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
a++;
for (i = 0; password[i]; i++)
{
if (password[i] >= (33 + a))
{
password[i] -= a;
break;
}
}
for (i = 0; password[i]; i++)
{
if (password[i] >= (33 + b))
{
password[i] -= b;
break;
}
}
}
printf("%s", password);
return (0);
}
