#include <stdio.h>

/**
* main - alphabet in lowercase, followed by a new line.
*
* Description: The main function return lowercase alphabets
* * Always return(0)
*/

int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
