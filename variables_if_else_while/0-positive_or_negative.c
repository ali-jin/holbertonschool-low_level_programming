#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main-Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
puts("is positive");
return (0);
}
else if (n == 0)
{
puts("is zero");
return (0);
}
else
{
puts("is negative");
return (0);
}
return (0);
}
